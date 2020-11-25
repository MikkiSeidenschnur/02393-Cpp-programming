#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* l_leaf;
    Node* r_leaf;
};

Node* F(int n) {
    
    Node* node = new Node;

    if (n == 0 || n == 1) {
        node->l_leaf = nullptr;
        node->r_leaf = nullptr;
        node->val = 1;
        return node;
    }

    Node* left = new Node;
    Node* right = new Node;

    left = F(n - 1);
    right = F(n - 2);
    
    node->val = left->val+right->val;
    node->l_leaf = left;
    node->r_leaf = right;

    return node;
}

void pre_order(Node* node) {
    cout << node->val << " ";

    if (!(node->l_leaf || node->r_leaf)) {
        return;
    }

    pre_order(node->l_leaf);
    pre_order(node->r_leaf);
}

int tree_size(Node* node) {

    if (!(node->l_leaf || node->r_leaf)) {
        return 1;
    }

    return tree_size(node->l_leaf) + tree_size(node->r_leaf) + 1;
}

int count_leaf(Node* node) {
    
    if (!(node->l_leaf || node->r_leaf)) {
        return 1;
    }

    return count_leaf(node->l_leaf) + count_leaf(node->r_leaf);
}

int depth(Node* node) {

    if (!(node->l_leaf || node->r_leaf)) {
        return 1;
    }

    return depth(node->l_leaf) + 1;
}


int main()
{
    //Tree t;

    int input;

    cin >> input;

    Node* top = F(input);
    cout << "Call tree in pre-order: "; 
    pre_order(top);
    cout << endl;
    cout << "Call tree size: " << tree_size(top) << endl;
    cout << "Call tree depth: " << depth(top) << endl;
    cout << "Call tree leafs: " << count_leaf(top) << endl;
}

