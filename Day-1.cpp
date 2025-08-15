#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (only 0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = 0, mid = 0, high = n - 1, temp;

    while (mid <= high) {
        if (arr[mid] == 0) { 
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 1) { 
            mid++;
        }
        else { 
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }

    cout << "The sorted array, arranged in increasing order of 0s, 1s, and 2s.\n";
    cout <<"[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
         if (i != n - 1) cout << ", ";
    }
   cout<<"]";

    return 0;
}
