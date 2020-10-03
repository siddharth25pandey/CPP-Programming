#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
                                                                              // Class for Binary tree using templates to make program generic.
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


BinaryTreeNode<int> * helper(BinaryTreeNode <int> * root, int a, int b){
    
    if(root == NULL)                                                           // Base case
        return NULL;
    
    if(root -> data == a or root -> data == b)                                 // Edge case
        return root;
    
    BinaryTreeNode <int> * left_lca = helper(root -> left, a, b);              // Recursive calls.
    BinaryTreeNode <int> * right_lca = helper(root -> right, a, b);
    
    if(left_lca and right_lca)  
        return root;           
        
        if(left_lca)                                                            // Calculation for a smaller problem, which is required to use recursion.
        return left_lca;
        
        else
        return right_lca;
}


int lcaBinaryTree(BinaryTreeNode<int> * root , int val1, int val2){
	
    BinaryTreeNode<int> * node = helper(root, val1, val2);                                // Helper function called.
    
    if(node)
        return node -> data;                                                              // Make a dry run for more clarity.
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
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);                        // Function to take input. It will take input until user gives -1 as input.
    queue<BinaryTreeNode<int>*> q;                                                        // -1 will not be considered as input.    
    q.push(root);
    while(!q.empty()) {
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
    BinaryTreeNode<int>* root = takeInput();                                                // Taking input and function calling.
    int a, b;
    cin >> a >> b;
    cout << lcaBinaryTree(root, a, b);
    delete root;
}
