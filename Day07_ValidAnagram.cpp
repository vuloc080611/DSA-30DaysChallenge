#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;
    int cnt[26] = {0};
    for (char c : s) cnt[c - 'a']++;
    for (char c : t) if (--cnt[c - 'a'] < 0) return false;
    return true;
}

int main() {
    cout << (isAnagram("anagram", "nagaram") ? "true" : "false") << endl; // true
    return 0;
}
