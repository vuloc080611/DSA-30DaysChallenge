#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int curr = nums[0], mx = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        curr = max(nums[i], curr + nums[i]);
        mx = max(mx, curr);
    }
    return mx;
}

int main() {
    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(a) << endl; // 6
    return 0;
}
