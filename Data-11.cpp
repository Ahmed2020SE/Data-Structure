#include <iostream>
using namespace std;
struct node {
	int data;
	node* right;
	node* left;
};
node * insert(node* root, int x) {
	node*newnode = new node;
	newnode->data = x;
	newnode->right = NULL;
	newnode->left = NULL;
	if (root == NULL)
		root = newnode;
	else {
		node*p = root;
		while (p != NULL) {
			if (p->data > x&&p->left == NULL)
				p->left = newnode;
			else if (p->data < x&&p->right == NULL)
				p->right = newnode;
			else if (p->data < x)
				p = p->left;
			else
				p = p->right;
		}
	}
}
void inorder(node*root) {
	if (root != NULL) {
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
	else
		return;
}

int main() {

}