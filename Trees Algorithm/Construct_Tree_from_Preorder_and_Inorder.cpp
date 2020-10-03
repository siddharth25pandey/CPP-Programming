#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;                                                           // Making class for binary tree using templates.
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;


	BinaryTreeNode<int>* buildTreeHelper(int * in, int * pre, int inS, int inE, int preS, int preE){
        if(inS > inE){
            return nullptr;
        }
                                                                            // Helper function.
        int rootData = pre[preS];
        int rootIndex = -1;
		for(int i = inS; i <= inE; i++){
            if(in[i] == rootData){
            	rootIndex = i;
                break;
            }
        }
        
        int linS = inS;                                                     // For calculating these values a little maths is required. Not a difficult task just make 
        int linE = rootIndex - 1;                                           // arrays in rough and you will be able to make logic.
        int lpreS = preS + 1;
        int lpreE = linE - linS + lpreS;
        int rinS = rootIndex + 1;
        int rinE = inE;
        int rpreS = lpreE + 1;
        int rpreE = preE;
        
        BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
        root -> left = buildTreeHelper(in, pre, linS, linE, lpreS, lpreE);
        root -> right = buildTreeHelper(in, pre, rinS, rinE, rpreS, rpreE);
        return root;
    }


BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
	return buildTreeHelper(inorder, preorder, 0, inLength - 1, 0, preLenght - 1);                         // Calling helper funtion.
}


BinaryTreeNode<int> *takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();                                     // Funtion for taking input.
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }                                                                       // Printing tree.
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main() {
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];                                                           // Making of preOrder, inOrder arrays and function calling.
    for (int i = 0; i < size; i++) cin >> pre[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(pre, size, in, size);
    printLevelATNewLine(root);
    }
