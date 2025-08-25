#include <iostream>
using namespace std;

void permute(char str[], int l, int r, int n) {
    if (l == r) {
        for (int i = 0; i < n; i++) 
        {
        cout << str[i];
        }
        cout << "\n";
        return;
        
    }
    for (int i = l; i <= r; i++) {
        
        char temp = str[l];
        str[l] = str[i];
        str[i] = temp;

        permute(str, l + 1, r, n);

        
        temp = str[l];
        str[l] = str[i];
        str[i] = temp;
    }
}

int main() {
    char s[20];
    cout<<"\n Enter the String: ";
    cin >> s;
cout<<"\n Output: \n";
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }

    permute(s, 0, n - 1, n);

    return 0;
}
