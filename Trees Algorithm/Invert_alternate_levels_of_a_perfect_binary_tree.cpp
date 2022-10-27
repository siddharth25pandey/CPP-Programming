// Using Level Order Traversal

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <queue>
#include <stack>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Function to print level order traversal of a perfect binary tree
void levelOrderTraversal(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    // create an empty queue and enqueue the root node
    queue<Node*> queue;
    queue.push(root);
 
    // pointer to store the current node
    Node* curr = nullptr;
 
    // loop till queue is empty
    while (queue.size())
    {
        // process each node in the queue and enqueue their
        // non-empty left and right child
        curr = queue.front();
        queue.pop();
 
        cout << curr->data << " ";
 
        if (curr->left) {
            queue.push(curr->left);
        }
 
        if (curr->right) {
            queue.push(curr->right);
        }
    }
}
 
// Iterative function to invert alternate levels of a perfect binary tree
// using level order traversal
void invertBinaryTree(Node* root)
{
    // base case: if the tree is empty
    if (root == nullptr) {
        return;
    }
 
    // maintain a queue and enqueue the root node
    queue<Node*> q;
    q.push(root);
 
    // to store current level information
    bool level = false;
 
    // maintain another queue to store nodes present at an odd level
    queue<Node*> level_nodes;
 
    // maintain a stack to store node's data on an odd level
    stack<int> level_data;
 
    // loop till queue is empty
    while (!q.empty())
    {
        // get the size of the current level
        int n = q.size();
 
        // process all nodes present at the current level
        while (n--)
        {
            // dequeue front node
            Node* curr = q.front();
            q.pop();
 
            // if the level is odd
            if (level)
            {
                // enqueue current node
                level_nodes.push(curr);
 
                // push the current node data into the stack
                level_data.push(curr->data);
            }
 
            // if the current node is the last node of the level
            if (n == 0)
            {
                // flip the level
                level = !level;
 
                // put elements present in the `level_data` into their correct
                // position using `level_nodes`
                while (!level_nodes.empty())
                {
                    Node* front = level_nodes.front();
                    front->data = level_data.top();
 
                    level_nodes.pop();
                    level_data.pop();
                }
            }
 
            // enqueue left child of the current node
            if (curr->left) {
                q.push(curr->left);
            }
 
            // enqueue right child of the current node
            if (curr->right) {
                q.push(curr->right);
            }
        }
    }
}
 
int main()
{
    /* Construct the following tree
                1
              /   \
            /       \
          2           3
        /   \       /   \
       4     5     6     7
      / \   / \   / \   / \
     8   9 10 11 12 13 14 15
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);
 
    invertBinaryTree(root);
    levelOrderTraversal(root);
 
    return 0;
}
