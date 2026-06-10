#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool canFinish(int n, vector<vector<int>>& prereq) {
    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);
    for (auto& p : prereq) {
        adj[p[1]].push_back(p[0]);
        indeg[p[0]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i) if (indeg[i]==0) q.push(i);
    int cnt = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        ++cnt;
        for (int v : adj[u]) if (--indeg[v]==0) q.push(v);
    }
    return cnt == n;
}

int main() {
    vector<vector<int>> p = {{1,0}};
    cout << (canFinish(2, p) ? "true" : "false") << endl; // true
    return 0;
}
