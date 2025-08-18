#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout<<"Enter the Size Of 2 Array: ";
    cin >> m >> n;  

    int arr1[m], arr2[n];
    
    cout<<"\nEnter the Array of first: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout<<"\nEnter the Array of Second: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr2[i];
    }
    int total = m + n;
    int gap = (total + 1) / 2;

    while (gap > 0) {
        int i = 0, j = gap;

        while (j < total) {
            int a, b;

           
            if (i < m)
            {
                a = arr1[i];
            }
            else
            {
                a = arr2[i - m];
            }
           
            if (j < m)
            {
            b = arr1[j];
            }
            else
            {
                b = arr2[j - m];
            }
            
            if (a > b) {
                if (i < m && j < m) {
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
                else if (i < m && j >= m) {
                    int temp = arr1[i];
                    arr1[i] = arr2[j - m];
                    arr2[j - m] = temp;
                }
                else {
                    int temp = arr2[i - m];
                    arr2[i - m] = arr2[j - m];
                    arr2[j - m] = temp;
                }
            }

            i++;
            j++;
        }

        if (gap == 1) break;
        gap = (gap + 1) / 2;
    }

    cout<<"\nArray First Sorted: \n";
    cout<<"[ ";
    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }
    cout<<"]";
     cout<<"\nArray Second Sorted: \n";
     cout<<"[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout<<" ]";
}
