#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the No:\n";
    cin >> N;

    int count = 0;
    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            if (i == N / i)
            {
                count = count + 1;
            }
            else
            {
                count = count + 2; 
            }
        }
    }

    cout << "Output:\t" << count;
    return 0;
}
