#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter The Array size : ";
    cin >> n;

    int arr[100]; 
    cout << "Enter The Array elements :\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the K: ";
    cin >> k;

   
    int count[100];   
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j]) 
            {
                c++;
            }
        }
        count[i] = c;
    }

   
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (count[i] == k)
        {
            ans = arr[i];
            break;
        }
    }

    cout << "Output: " << ans << endl;

    return 0;
}
