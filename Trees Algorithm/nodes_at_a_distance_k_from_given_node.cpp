#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

class node
{
public:
    int data;
    node*left,*right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

node*build_tree()
{
    int d;
    cin>>d;

    if(d==-1)
    return NULL;

    node*root=new node(d);

    root->left=build_tree();
    root->right=build_tree();

    return root;
}

void print_tree(node*root)
{
    if(root==NULL);
    return;

    cout<<root->data<<" ";

    print_tree(root->left);
    print_tree(root->right);
}

void print_at_level_k(node*root,int k)
{
    if(root==NULL)
    return;

    if(k==0)
    {
        cout<<root->data<<" ";
        return;
    }

    print_at_level_k(root->left,k-1);
    print_at_level_k(root->right,k-1);
}

int print_at_distance_k(node*root,node*target,int k)
{
    // base case
    if(root==NULL)
    return -1;

    if(root==target)
    {
        print_at_level_k(target,k);
        return 0;
    }

    // next step
    int DL=print_at_distance_k(root->left,target,k);

    if(DL!=-1)
    {
        // again there are two cases
        // ancestor or go right 

        if(DL+1==k)
        cout<<root->data<<" ";

        else 
        print_at_level_k(root->right,k-2-DL);

        return 1+DL;
    }

    int DR=print_at_distance_k(root->right,target,k);

    if(DR!=-1)
    {
        // again there are two cases
        // ancestor or go right 

        if(DR+1==k)
        cout<<root->data<<" ";

        else 
        print_at_level_k(root->left,k-2-DR);

        return 1+DR;
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node*root;

    root=build_tree();

    print_tree(root);
    node*target=root->left->left;
    print_at_distance_k(root,target,3);

    return 0;
}