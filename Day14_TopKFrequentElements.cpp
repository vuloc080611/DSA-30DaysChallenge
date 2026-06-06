#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int x : nums) freq[x]++;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    for (auto& p : freq) {
        pq.push({p.second, p.first});
        if (pq.size() > k) pq.pop();
    }
    vector<int> res;
    while (!pq.empty()) { res.push_back(pq.top().second); pq.pop(); }
    return res;
}

int main() {
    vector<int> a = {1,1,1,2,2,3};
    auto res = topKFrequent(a, 2);
    for (int x : res) cout << x << " "; // 1 2
    return 0;
}
