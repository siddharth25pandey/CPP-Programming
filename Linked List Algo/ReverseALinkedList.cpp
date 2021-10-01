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
    LinkedList();
    void append(int value);
    void reverse();
    void printList();
};
LinkedList::LinkedList(){
    head = nullptr;
}
void LinkedList::append(int value){
    if(head==nullptr){
       head = new Node;
       head->next = nullptr;
       head->data = value;
    }
    else{
        Node *n =head;
        Node *new_node = new Node;
        new_node->data = value;
        while(n->next!=nullptr)
            n=n->next;
        n->next = new_node;
        new_node->next = nullptr;
    }
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
    int a;
    LinkedList ll;
    while(1){
        cout<<"===================================="<<endl;
        cout<<"1.Add element to the linked list"<<endl;
        cout<<"2.See the orignal and reversed version of your list"<<endl;
        cout<<"3.Exit the interface"<<endl;
        cin>>a;
        if(a==3){
            break;
        }
        switch (a)
        {
            case 1:{
                int new_element;
                cout<<"Enter the element to be added: ";
                cin>>new_element;
                ll.append(new_element);
                break;
            }
            case 2:{
                cout<<"Orignal: ";
                ll.printList();
                ll.reverse();
                cout<<"Reversed: ";
                ll.printList();
                break;
            }
        }
    }
return 0;
}