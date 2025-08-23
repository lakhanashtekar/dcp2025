#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string strs[200];   
    cout << "Enter strings: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string ans = ""; 
    bool flag = true;

    for (int i = 0; i < strs[0].size(); i++) {
        char ch = strs[0][i];

       
        for (int j = 1; j < n; j++) {
            if (i >= strs[j].size() || strs[j][i] != ch) {
                flag = false; 
                break;
            }
        }

        if (flag) {
            ans = ans + ch;  
        } else {
            break;  
            }
    }

    cout << "Longest Common Prefix: " << ans << endl;

    return 0;
}
