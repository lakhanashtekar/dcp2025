#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout<<"Enter the N and M:\n";
    cin >> N >> M;

int a = N, b = M;

    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;
    int lcm = (N / gcd) * M; 

    cout <<"\nLCM: "<<lcm << endl;
    return 0;
}
