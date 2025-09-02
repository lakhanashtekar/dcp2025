#include <iostream>
using namespace std;

int main() {
    int st[100];  
    int top = -1;  
    int n;         
    string token;

    cout << "Enter number of tokens: ";
    cin >> n;

    cout << "Enter the tokens:\n";
    for (int i = 0; i < n; i++) {
        cin >> token;

        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            int b = st[top--];
            int a = st[top--];
            int result = 0;

            if (token == "+")
            {
                result = a + b;
            }
            else if (token == "-")
            {
            result = a - b;
            }
            else if (token == "*")
            {
            result = a * b;
            }
            else if (token == "/")
            {
                result = a / b;
            }

            st[++top] = result;
        }
        else
        {
           
            int num = 0, sign = 1, j = 0;
            if (token[0] == '-')
            {
                sign = -1;
                j = 1;
            }
            while (j < token.size()) 
            {
                num = num * 10 + (token[j] - '0');
                j++;
            }
            st[++top] = num * sign;
        }
    }

    cout << "Result = " << st[top] << endl;
    return 0;
}
