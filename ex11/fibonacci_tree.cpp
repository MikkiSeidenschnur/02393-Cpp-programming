#include "fibonacci_tree.h"

#include <iostream>

Tree::Tree(Node* node) {
	top = node;
}

void Tree::insert(Node* node, int val) {
	node->val = val;

}

