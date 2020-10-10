#include<iostream>
using namespace std;
//Reverse a linked list 
struct Node{
    int data;
    Node *next;
};
class LinkedList{
    Node *head;
    public:
    LinkedList(int value);
    void append(int value);
    void reverse();
    void printList();
};
LinkedList::LinkedList(int value){
    head = new Node;
    head->data = value;
    head->next = nullptr;
}
void LinkedList::append(int value){
    Node *n =head;
    while(n->next!=nullptr)
        n=n->next;
    Node *new_node = new Node;
    new_node->data = value;
    n->next = new_node;
    new_node->next = nullptr;
}
void LinkedList::reverse(){
    Node *prev, *next , *curr;
    prev = nullptr;
    curr=head;
    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev = curr;
        curr=next;
    }
    head = prev;
}
void LinkedList::printList(){
    Node *n = head;
    while(n!=nullptr){
        cout<<n->data<<" ";
        n= n->next;
    }
    cout<<endl;
}
int main(){
    LinkedList a(1);
    a.append(10);
    a.append(20);
    a.append(3);
    a.append(40);
    a.append(0);
    a.printList(); // 1 10 20 3 40 0
    a.reverse();
    a.printList(); // 0 40 3 20 10 1
return 0;
}