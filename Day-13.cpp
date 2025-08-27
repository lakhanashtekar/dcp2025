#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int n = s.size();
    int start = 0;   
    int maxLen = 1;  


    for (int mid = 0; mid < n; mid++) 
    {
   
        int left = mid, right = mid;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            if (right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

      
        left = mid, right = mid + 1;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            if (right - left + 1 > maxLen)
            {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    cout << "Longest Palindromic Substring: ";
    for (int i = start; i < start + maxLen; i++)
    {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
