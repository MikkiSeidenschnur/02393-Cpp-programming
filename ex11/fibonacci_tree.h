#pragma once

struct Node {
	int val;
	Node* l_leaf;
	Node* r_leaf;
};

class Tree
{
public:
	Tree(Node* node);
	~Tree(void);
	void insert(Node* node, int val);

private:
	Node* top;
};

