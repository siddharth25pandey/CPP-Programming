//Inorder-> left, root, right


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
  
void Inorder( struct Node *root)
{
  if(root==0)
  { return 0;}
 Inorder( root->left);
 printf("%d", root->data);
 Inorder( root->right);
}
  

int main() 
{ 
  
    struct Node *root = new Node(10); 
    root->left        = new Node(20); 
    root->right       = new Node(30); 
    root->left->left  = new Node(40); 
    root->left->right = new Node(50); 
  
    Inorder(root); 
    return 0; 
}
