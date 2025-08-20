#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];  
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Zero sum subarrays (start, end):" << endl;

  
    for (int i = 0; i < n; i++) {
        int sum = 0;   
        for (int j = i; j < n; j++) {
            sum = sum + arr[j]; 
            if (sum == 0) {
                cout << "(" << i << ", " << j << ")" << endl;
            }
        }
    }

    return 0;
}
