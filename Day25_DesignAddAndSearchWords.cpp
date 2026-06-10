#include <iostream>
#include <string>
using namespace std;

class WordDictionary {
    struct Node {
        bool isEnd;
        Node* child[26];
        Node() { isEnd = false; fill(child, child+26, nullptr); }
    };
    Node* root;
    bool dfs(const string& word, int idx, Node* p) {
        if (!p) return false;
        if (idx == word.size()) return p->isEnd;
        char c = word[idx];
        if (c != '.') {
            return dfs(word, idx+1, p->child[c - 'a']);
        } else {
            for (int i = 0; i < 26; ++i)
                if (dfs(word, idx+1, p->child[i])) return true;
            return false;
        }
    }
public:
    WordDictionary() { root = new Node(); }
    void addWord(string word) {
        Node* p = root;
        for (char c : word) {
            int i = c - 'a';
            if (!p->child[i]) p->child[i] = new Node();
            p = p->child[i];
        }
        p->isEnd = true;
    }
    bool search(string word) { return dfs(word, 0, root); }
};

int main() {
    WordDictionary wd;
    wd.addWord("bad"); wd.addWord("dad"); wd.addWord("mad");
    cout << (wd.search("pad") ? "true" : "false") << endl; // false
    cout << (wd.search("bad") ? "true" : "false") << endl; // true
    cout << (wd.search(".ad") ? "true" : "false") << endl; // true
    return 0;
}
