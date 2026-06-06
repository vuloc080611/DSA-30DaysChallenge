#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int best = 0;
    for (int x : s) {
        if (!s.count(x-1)) { // bắt đầu dãy mới
            int cur = x, len = 1;
            while (s.count(cur+1)) { ++cur; ++len; }
            best = max(best, len);
        }
    }
    return best;
}

int main() {
    vector<int> a = {100,4,200,1,3,2};
    cout << longestConsecutive(a) << endl; // 4 (1,2,3,4)
    return 0;
}
