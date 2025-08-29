#include <iostream>
using namespace std;

int main() {
    char s[100];   
    cout<<"\n Enter the String :";
    cin >> s;

    int n = 0;
    while (s[n] != '\0') 
    {
    n++;   
}
    int lastIndex[256];         
    for (int i = 0; i < 256; i++) 
    {
        lastIndex[i] = -1;
    }

    int start = 0;   
    int maxLen = 0;  

    for (int i = 0; i < n; i++)
    
    {
        int ch = (int)s[i];

        if (lastIndex[ch] >= start) 
        {
            start = lastIndex[ch] + 1;   
        }

        lastIndex[ch] = i;  

        int len = i - start + 1;   
        if (len > maxLen) 
        {
            maxLen = len;
        }
    }

    cout << maxLen;

    return 0;
}
