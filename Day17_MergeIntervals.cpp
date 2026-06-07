#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    for (auto& inv : intervals) {
        if (res.empty() || res.back()[1] < inv[0])
            res.push_back(inv);
        else
            res.back()[1] = max(res.back()[1], inv[1]);
    }
    return res;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    auto res = merge(intervals);
    for (auto& v : res) cout << "[" << v[0] << "," << v[1] << "] ";
    // [1,6] [8,10] [15,18]
    return 0;
}
