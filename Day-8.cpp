#include <iostream>
using namespace std;

int main() {
    string s;
    cout<<"Enter the String (One Sentence):\n";
    getline(cin, s);  

    int n = s.length();
    int i = n - 1;
cout<<"Reverse String(Sentence):\n";
    while (i >= 0) {
       
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        if (i < 0) 
        {
            break;
        }
       
        int j = i;

       
        while (i >= 0 && s[i] != ' ') {
            i--;
        }

        for (int k = i + 1; k <= j; k++) {
            cout << s[k];
        }

     
        if (i >= 0)
        {
            cout << " ";
        }
    }

    return 0;
}
