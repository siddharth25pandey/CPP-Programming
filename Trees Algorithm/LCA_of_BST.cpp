#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;                                                                // Class for BST.
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
    	if(left) 
       		delete left;
    	if(right) 
       		delete right;
    }
};

using namespace std;


BinaryTreeNode<int>* helper(BinaryTreeNode<int>* root, int a, int b){
    if(root == NULL)
        return nullptr;                                                                     // Helpre function.
    
    if(a > root -> data and b > root -> data)
        return helper(root -> right, a, b);
	
    if(a < root -> data and b < root -> data)
        return helper(root -> left, a, b);
    
    else
    return root;
} 

int lcaInBST(BinaryTreeNode<int>* root ,int val1 ,int val2){
    BinaryTreeNode<int>* res = helper(root, val1, val2);                                     // calling helper function.
    
    if(res)
        return res -> data;
    else
        return -1;
}


BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {                                                                       // Taking input for tree.
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int a, b;
    cin >> a >> b;                                                                               // Function calling.
    cout << lcaInBST(root, a, b);
    delete root;
}
