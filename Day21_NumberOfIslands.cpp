#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<char>>& grid, int i, int j) {
    if (i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0') return;
    grid[i][j] = '0';
    dfs(grid, i+1, j); dfs(grid, i-1, j);
    dfs(grid, i, j+1); dfs(grid, i, j-1);
}

int numIslands(vector<vector<char>>& grid) {
    int m = grid.size(), n = grid[0].size(), cnt = 0;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] == '1') { ++cnt; dfs(grid, i, j); }
    return cnt;
}

int main() {
    vector<vector<char>> g = {{'1','1','0','0','0'},
                              {'1','1','0','0','0'},
                              {'0','0','1','0','0'},
                              {'0','0','0','1','1'}};
    cout << numIslands(g) << endl; // 3
    return 0;
}
