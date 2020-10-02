//Preorder-> root, left, right


#include<bits/stdc++.h>
using namespace std;

void Preorder( struct node *root)
{
  if(root==0)
  { return 0;}
 printf("%d", root->data);
 Preorder( root->left);
 Preorder( root->right);
}

void main()
{
  struct node *root;
  printf( "Preorder is:");
  Preorder(root);
}
