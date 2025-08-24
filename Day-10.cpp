#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    string strs[100];  
    cout << "Enter " << n << " words:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string sorted[100];
    for (int i = 0; i < n; i++) {
        sorted[i] = strs[i];
        int len = sorted[i].length();

        
        for (int j = 0; j < len; j++) {
            for (int k = 0; k < len - 1; k++) {
                if (sorted[i][k] > sorted[i][k+1]) {
                    char temp = sorted[i][k];
                    sorted[i][k] = sorted[i][k+1];
                    sorted[i][k+1] = temp;
                }
            }
        }
    }

  
    cout << "\nGroups of Anagrams:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "{ ";
        for (int j = 0; j < n; j++) {
            if (sorted[i] == sorted[j]) {
                cout << strs[j] << " ";
            }
        }
        cout << "}" << endl;
    }

    return 0;
}
