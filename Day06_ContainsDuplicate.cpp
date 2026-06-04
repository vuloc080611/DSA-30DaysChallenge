#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for (int x : nums) {
        if (s.count(x)) return true;
        s.insert(x);
    }
    return false;
}

int main() {
    vector<int> v = {1,2,3,1};
    cout << (containsDuplicate(v) ? "true" : "false") << endl; // true
    return 0;
}
