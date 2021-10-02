#include<iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node *left = NULL;
	node *right = NULL;

	node(int d) {
		data = d;
	}
};

class Pair {
public:
	int height = 0;
	bool balanced = 1;
};

node* buildTree() {
	int d; cin >> d;

	if (d == -1) {
		return NULL;
	}

	node *root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

// Pre-order traversal
void printPre(node *root) {

	if (root == NULL) {
		return;
	}

	// print root
	cout << root->data << " ";

	// Call on left part
	printPre(root->left);
	// Call on right part
	printPre(root->right);

}

void bfs(node *root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node *f = q.front();
		if (f == NULL) {
			// prev level is complete. so print endl
			cout << endl;
			q.pop();
			// prev level has also pushed all its children. So push endl
			if (!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << f->data << " ";

			q.pop();

			if (f->left != NULL) {
				q.push(f->left);
			}
			if (f->right != NULL) {
				q.push(f->right);
			}
		}
	}

}

// O(n) - Bottom Up
Pair isBalanced(node *root) {

	Pair p;

	// Base Case
	if (root == NULL) {
		return p;
	}

	Pair p1 = isBalanced(root->left);
	Pair p2 = isBalanced(root->right);

	p.height = max(p1.height, p2.height) + 1;
	if (abs(p1.height - p2.height) <= 1 && p1.balanced && p2.balanced) {
		p.balanced = 1;
	} else {
		p.balanced = 0;
	}

	return p;
}



int main() {
	node *root = buildTree();
	cout << isBalanced(root).balanced << endl;
}