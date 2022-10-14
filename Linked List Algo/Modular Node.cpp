// problem link--https://practice.geeksforgeeks.org/problems/modular-node/1



#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

int modularNode(Node* head, int k)
{
	// Code here
	Node* temp =head;
	int ans=-1;
int i=1;
while(temp != NULL)
{
    if((i)%k==0){
        ans=temp->data;
    }
    temp=temp->next;
    i++;
}
return ans;
}