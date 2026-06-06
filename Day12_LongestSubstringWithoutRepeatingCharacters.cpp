#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> win;
    int l = 0, mx = 0;
    for (int r = 0; r < s.size(); ++r) {
        while (win.count(s[r])) win.erase(s[l++]);
        win.insert(s[r]);
        mx = max(mx, r - l + 1);
    }
    return mx;
}

int main() {
    cout << lengthOfLongestSubstring("abcabcbb") << endl; // 3
    return 0;
}
