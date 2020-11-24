#include "doubly-linked.h"

Node* last = new Node;

List::List(void) {
	first = nullptr;
	last = nullptr;
}

List::~List(void) {

}

void List::insert(int n) {
	Node* newNode = new Node;

	newNode->val = n;
	newNode->next = nullptr;

	if (first == NULL) {
		newNode->prev = nullptr;
		first = newNode;
		last = first;

		return; 
	}

	newNode->prev = last;
	last->next = newNode;
	last = newNode;
}

void List::reverse(void) {
	Node* it = first;
	Node* temp_next = new Node;

	while (it != NULL) {
		temp_next = it->next;
		it->next = it->prev;
		it->prev = temp_next;

		it = temp_next;
	}

	Node* temp_first = first;
	first = last;
	last = temp_first;
}

void List::print(void){
	Node* it = first;
	
	while (it != NULL) {
		cout << it->val << " ";
		it = it->next;
	}

	cout << endl;
}