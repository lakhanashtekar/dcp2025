#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array :\n";
    cin >> n;           
    int arr[n];
    cout<<"Enter array input:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];      
    }

    int leaders[n];         
    int count = 0;
    int maxFromRight = arr[n-1];

    leaders[count++] = maxFromRight;   

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxFromRight) {
            leaders[count++] = arr[i];
            maxFromRight = arr[i];
        }
    }

 cout<<"\n Your Array Output \n ";   
    for (int i = count-1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    
    return 0;
}
