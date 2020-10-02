//Inorder-> left, root, right


#include<bits/stdc++.h>
using namespace std;

void Inorder( struct node *root)
{
  if(root==0)
  { return 0;}
 Inorder( root->left);
 printf("%d", root->data);
 Inorder( root->right);
}

void main()
{
  struct node *root;
  printf( "Inorder is:");
  Inorder(root);
}
