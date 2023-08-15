#include <iostream>
using namespace std;


class binaryTree_Node {

	string data;

	binaryTree_Node *left, *right;


	binaryTree_Node(string Data, binaryTree_Node *left, binaryTree_Node *right) {

		this->data = Data;
		this->left = left;
		this->right = right;

	}

	static void traverse(binaryTree_Node *node) {

		if (node->left != NULL)
			traverse(node->left);
		if (node->right != NULL)
			traverse(node->right);

		cout << node->data << ", ";

	}

};


int main() {

	binaryTree_Node tree = binaryTree_Node("Root", NULL, NULL);

}