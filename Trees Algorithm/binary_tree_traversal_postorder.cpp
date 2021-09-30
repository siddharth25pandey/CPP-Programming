//Postorder: left, right, root

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
  
void Postorder( struct Node *root)
{
  if(root==0)
  { return 0;}
 Postorder( root->left);
 Postorder( root->right);
 printf("%d", root->data);
}
  

int main() 
{ 
  
    struct Node *root = new Node(1); 
    root->left        = new Node(2); 
    root->right       = new Node(3); 
    root->left->left  = new Node(4); 
    root->left->right = new Node(5); 
  
    Postorder(root); 
    return 0; 
} 

