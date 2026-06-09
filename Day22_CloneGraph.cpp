#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() : val(0) {}
    Node(int _val) : val(_val) {}
    Node(int _val, vector<Node*> _neighbors) : val(_val), neighbors(_neighbors) {}
};

unordered_map<Node*, Node*> cloned;
Node* cloneGraph(Node* node) {
    if (!node) return nullptr;
    if (cloned.count(node)) return cloned[node];
    Node* copy = new Node(node->val);
    cloned[node] = copy;
    for (Node* nbr : node->neighbors)
        copy->neighbors.push_back(cloneGraph(nbr));
    return copy;
}

// Test đơn giản
int main() {
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    n1->neighbors.push_back(n2);
    n2->neighbors.push_back(n1);
    Node* copy = cloneGraph(n1);
    cout << copy->val << " " << copy->neighbors[0]->val << endl; // 1 2
    return 0;
}
