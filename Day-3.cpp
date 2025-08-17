#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n+1];
    cout << "Enter " << n+1 << " numbers: ";
    int actualSum = 0;
    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
        actualSum =actualSum+arr[i];
    }

    int expectedSum = (n * (n + 1))/2;  
    int duplicate = actualSum - expectedSum;
    cout << "Duplicate number: " << duplicate;

    return 0;
}
