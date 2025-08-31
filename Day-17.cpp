#include <iostream>
using namespace std;

int main() {


    int N;
    cout<<"enter no:\n";
    cin >> N;

    
    while (N % 2 == 0) {
        cout << 2 << " ";
        N = N / 2;
    }

    
    for (int i = 3; i * i <= N; i = i + 2) {
        while (N % i == 0) {
            cout << i << " ";
            N = N / i;
        }
    }
    
    if (N > 1) {
        cout << N;
    }

    return 0;
}
