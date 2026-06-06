#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int l = 0, r = height.size()-1, ans = 0;
    while (l < r) {
        int h = min(height[l], height[r]);
        ans = max(ans, h * (r - l));
        if (height[l] < height[r]) ++l;
        else --r;
    }
    return ans;
}

int main() {
    vector<int> h = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(h) << endl; // 49
    return 0;
}
