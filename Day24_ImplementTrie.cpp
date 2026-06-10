#include <iostream>
#include <string>
using namespace std;

class Trie {
    struct Node {
        bool isEnd;
        Node* child[26];
        Node() { isEnd = false; fill(child, child+26, nullptr); }
    };
    Node* root;
public:
    Trie() { root = new Node(); }
    void insert(string word) {
        Node* p = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!p->child[idx]) p->child[idx] = new Node();
            p = p->child[idx];
        }
        p->isEnd = true;
    }
    bool search(string word) {
        Node* p = root;
        for (char c : word) {
            p = p->child[c - 'a'];
            if (!p) return false;
        }
        return p->isEnd;
    }
    bool startsWith(string prefix) {
        Node* p = root;
        for (char c : prefix) {
            p = p->child[c - 'a'];
            if (!p) return false;
        }
        return true;
    }
};

int main() {
    Trie t;
    t.insert("apple");
    cout << (t.search("apple") ? "true" : "false") << endl;   // true
    cout << (t.search("app") ? "true" : "false") << endl;     // false
    cout << (t.startsWith("app") ? "true" : "false") << endl; // true
    return 0;
}
