/*
    Given a binary tree, find top view;
*/

#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int d):data(d),left(NULL),right(NULL){
        }
};

class bntree{

    public:

        node* make_btree(const vector<int> &vr, int n);

        void top_view(node* root);

        

};


int main(){

    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    vector<int> vr(n,0);
    
    cout<<"Enter data of nodes in level order format;\nEnter -1 for NULL: ";
    for(int i=0;i<n;++i){
        cin>>vr[i];
    }

    bntree bnt;
    node* root = bnt.make_btree( vr , n );

    bnt.top_view(root);
    
    return 0;
}

node* bntree::make_btree(const vector<int> &vr , int n){

    node* head = NULL;
    queue<node*> q;

    for(int i=0; i < n; ++i){

        if(q.empty()){
            head = new node(vr[i]);
            q.push(head);
        }
        else{
            node* curr = q.front();

            if(curr->left == NULL){
                if(vr[i] != -1){
                    curr->left = new node(vr[i]);
                    q.push(curr->left);
                }
            }

            ++i;
            if(i==n){
                break;
            }

            if(curr->right == NULL){
                if(vr[i] != -1){
                    curr->right = new node(vr[i]);
                    q.push(curr->right);
                }
                q.pop();
            }


        }
    }
    return head;
}

//use vertical traversal
void bntree::top_view(node* root){

    if(root == NULL){
        return ;
    }

    map<int,int> mp;
    queue<pair<int,node*>> q;

    q.push({0,root});

    while(!q.empty()){

        int lvl = q.front().first;
        node* curr = q.front().second;
        q.pop();

        if(mp.find(lvl) == mp.end()){
            mp[lvl] = curr->data;
        }

        if(curr->left != NULL){
            q.push({lvl-1, curr->left});
        }

        if(curr->right != NULL){
            q.push({lvl+1,curr->right});
        }

    }

    map<int,int> :: iterator it = mp.begin();

    for( ; it != mp.end(); ++it){
        cout<<it->second<<" ";
    }
    

    return ;

}
