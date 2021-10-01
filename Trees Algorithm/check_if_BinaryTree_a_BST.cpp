#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;                                                            // Making class for tree.
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


#include <climits>
bool helper(BinaryTreeNode<int> *root, int min =  INT_MIN, int max = INT_MAX){
    if(root == nullptr){
        return true;
    }
    
    // Here we are checking that root's data is in range otherwise we can't compare it with it's children's data.
    
    if(root -> data < min or root -> data > max){
        return false;
    }
    
    
    bool isLeftOk = helper(root -> left, min, root -> data -1);
    bool isRightOk = helper(root -> right, root -> data, max);
    return isLeftOk and isRightOk;                                            /* This means that if both are true then true will be returned
                                                                                 otherwise false will be returned.*/
}

bool isBST(BinaryTreeNode<int> *root){
    
	bool ans = helper(root);
    return ans;
    
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
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();                                                 // Function for taking input for tree.
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
    if(isBST(root)) {
        cout << "true" << endl;                                                                         // Function calling and tree building.
    }
    else {
        cout << "false" << endl;
    }
    delete root;
}
