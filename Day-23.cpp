#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter Array size: ";
    cin >> n;

    int arr[100];  
    cout << "Enter Array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Window size k: ";
    cin >> k;

    
    cout << "Sliding Window Maximums:\n";
    for (int i = 0; i <= n - k; i++)
    {
        int maxi = arr[i];
   
        for (int j = i; j < i + k; j++)
        {
            if (arr[j] > maxi)
            {
                maxi = arr[j];
            }
        }
        cout << maxi << " ";
    }
    

    return 0;
}
