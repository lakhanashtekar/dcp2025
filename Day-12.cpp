#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string of brackets: ";
    cin >> s;

    char stack[100];  
    int top = -1;       

    bool valid = true;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

       
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        else {
            
            if (top == -1) {
                valid = false;
                break;
            }

          
            char last = stack[top--];

            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                valid = false;
                break;
            }
        }
    }

   
    if (top != -1)
    {
        valid = false;
    }
    if (valid) 
    {
    cout << "true";
    }
    else
    {
    cout << "false";
    }
    return 0;
}
