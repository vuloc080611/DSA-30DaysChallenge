#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= amount; ++i)
        for (int c : coins)
            if (i - c >= 0 && dp[i-c] != INT_MAX)
                dp[i] = min(dp[i], dp[i-c] + 1);
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main() {
    vector<int> coins = {1,2,5};
    cout << coinChange(coins, 11) << endl; // 3 (5+5+1)
    return 0;
}
