#include <iostream>
using namespace std;

int main() {
    string s;
    int k;
    cout << "Enter string: ";
    cin >> s;
    cout << "Enter k: ";
    cin >> k;

    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int freq[26] = {0}; 
        int distinct = 0;

        for (int j = i; j < n; j++) {
            int idx = s[j] - 'a';
            if (freq[idx] == 0) {
                distinct++; 
            }
            freq[idx]++;

            if (distinct == k) {
                ans++;
            }
            else if (distinct > k) {
                break;  
            }
        }
    }

    cout << "Count of substrings with exactly " << k << " distinct characters: " << ans;

    return 0;
}
