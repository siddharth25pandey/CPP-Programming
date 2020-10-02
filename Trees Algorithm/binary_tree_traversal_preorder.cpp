//Preorder-> root, left, right


#include<bits/stdc++.h> 
using namespace std; 

struct Node 
{ 
    int data; 
    struct Node* left; 
    struct Node* right; 
    Node (int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
  
void Preorder( struct Node *root)
{
  if(root==0)
  { return 0;}
 printf("%d", root->data);
 Inorder( root->left);
 Inorder( root->right);
}
  

int main() 
{ 
  
    struct Node *root = new Node(1); 
    root->left        = new Node(2); 
    root->right       = new Node(3); 
    root->left->left  = new Node(4); 
    root->left->right = new Node(5); 
  
    Preorder(root); 
    return 0; 
} 

