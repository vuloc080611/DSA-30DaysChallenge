#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

string minWindow(string s, string t) {
    vector<int> need(128,0);
    for (char c : t) need[c]++;
    int missing = t.size(), l = 0, start = 0, minLen = INT_MAX;
    for (int r = 0; r < s.size(); ++r) {
        if (need[s[r]]-- > 0) missing--;
        while (missing == 0) {
            if (r - l + 1 < minLen) {
                minLen = r - l + 1;
                start = l;
            }
            if (++need[s[l]] > 0) missing++;
            l++;
        }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}

int main() {
    cout << minWindow("ADOBECODEBANC", "ABC") << endl; // "BANC"
    return 0;
}
