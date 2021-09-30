#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct tree
{
    char data;
    int freq;
    tree* left;
    tree* right;
    tree(char c,int freq)
    {
        left=right=NULL;
        this->data=c;
        this->freq=freq;
    }
};
void print(tree *root,string str)
{
    if(root==NULL)
        return;
    if(root->data!='$')
        cout<<root->data<<" :"<<str<<endl;
    print(root->left,str+'0');
    print(root->right,str+'1');
}
int main()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int f[n];
    for(int i=0;i<n;i++)
        cin>>f[i];
    priority_queue<pair<int,tree*>,vector<pair<int,tree*>>,greater<pair<int,tree*>>>p;
    for(int i=0;i<n;i++)
        p.push(make_pair(f[i],new tree(a[i],f[i])));
    tree *left,*right;
    while(p.size()!=1)
    {
        left=(p.top()).second;
        p.pop();
        right=(p.top()).second;
        p.pop();
        tree* aux =new tree('$',left->freq+right->freq);
        aux->left=left;
        aux->right=right;
        p.push(make_pair(left->freq+right->freq,aux));
    }
    cout<<"Huffman Codes are->"<<endl;
    tree *res=(p.top()).second;
    print(res,"");
    return 0;
}
