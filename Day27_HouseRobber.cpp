#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rob(vector<int>& nums) {
    if (nums.empty()) return 0;
    int prev2 = 0, prev1 = 0;
    for (int x : nums) {
        int cur = max(prev1, prev2 + x);
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}

int main() {
    vector<int> a = {2,7,9,3,1};
    cout << rob(a) << endl; // 12
    return 0;
}
