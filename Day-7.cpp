#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int height[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    if (n < 3) {    
        cout << 0;
        return 0;
    }

    int left = 0, right = n - 1;
    int left_max = 0, right_max = 0;
    int water = 0;

    while (left < right) {
        if (height[left] <= height[right]) {
            if (height[left] >= left_max) {
                left_max = height[left];   
            } else {
                water += left_max - height[left]; 
            }
            left++;
        } else {
            if (height[right] >= right_max) {
                right_max = height[right];  
            } else {
                water += right_max - height[right];
            }
            right--;
        }
    }

    cout << "Total water trapped: " << water << endl;
    return 0;
}
