#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
class Stack{
    Node *head;
    public:
    Stack(){
        head = nullptr;
    }
    void push(int value);
    void pop();
    int top();
    bool isEmpty();
    void printStack();
};
void Stack::push(int value){
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}
void Stack::pop(){
    if(!isEmpty()){
        Node *new_top = head->next;
        Node *temp = head;
        delete temp;
        head = new_top; 
    }
    else{
        cout<<"Stack is already empty"<<endl;
    }
}
int Stack::top(){
    if(!isEmpty()){
       return head->data;
    }
    else{
        cout<<"Already empty"<<endl;
        return -1;
    }
}
bool Stack::isEmpty(){
    if(head==nullptr){
        return 1;
    }
    else{
        return 0;
    }
}
void Stack::printStack(){
    Node *n = head;
    while(n!=nullptr){
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}
int main(){
    Stack a;
    a.push(10);
    a.push(0);
    a.push(20);
    a.push(30);
    a.printStack();
    cout<<a.top()<<endl;
    a.pop();
    a.printStack();
return 0;
}