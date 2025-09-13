#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of coins:\n";
    cin >> n;                 
    int coins[20];
    cout<<"Enter the Coins:\n";
    for (int i = 0; i < n; i++)
    {
    cin >> coins[i];
    }
    int amount;
    cout<<"Enter the Amount:\n";
    cin >> amount;

    const int INF = 1e9;     
    int dp[100];

    for (int i = 0; i <= amount; i++)
    {
    dp[i] = INF;
    }
    dp[0] = 0;            

    for (int i = 1; i <= amount; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            int c = coins[j];
            if (c <= i && dp[i - c] + 1 < dp[i])
                dp[i] = dp[i - c] + 1;
        }
    }
    cout<<"Result:\n";
    if (dp[amount] == INF)
    {
    cout << -1;
    }
    else
    {
    cout << dp[amount];
    }
    return 0;
}
