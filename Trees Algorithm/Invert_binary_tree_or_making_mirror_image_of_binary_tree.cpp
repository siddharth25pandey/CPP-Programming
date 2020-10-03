#include <iostream>
#include <queue>



template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;                  // Making class for binary tree using template to make tree more generic.
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;



void mirrorBinaryTree(BinaryTreeNode<int>* root) {
	
    if(root == nullptr)
        return;
    
    //First mirror left and right of root.
    mirrorBinaryTree(root -> left);
    mirrorBinaryTree(root -> right);
    
    //Now swap left and right of root.                    // Function for inverting binary tree.
    BinaryTreeNode<int>* temp = root -> left;
    root -> left = root -> right;
    root -> right = temp;
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
        BinaryTreeNode<int> *currentNode = q.front();
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
                break;                                            // Function for printing the tree.
            }
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
    BinaryTreeNode<int> *root = takeInput();
    mirrorBinaryTree(root);                                     // Function calling.
    printLevelATNewLine(root);
}
