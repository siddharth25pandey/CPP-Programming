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
        int a;
        Stack x;
        while(1){
        cout<<"===================================="<<endl;
        cout<<"1.Add element to the stack"<<endl;
        cout<<"2.Pop element from the stack"<<endl;
        cout<<"3.View your stack"<<endl;
        cout<<"4.Exit the interface"<<endl;
        cin>>a;
        if(a==4){
            break;
        }
        switch (a)
        {
            case 1:{
                int new_element;
                cout<<"Enter the element to be added: ";
                cin>>new_element;
                x.push(new_element);
                break;
            }
            case 2:{
                cout<<"Element popped: "<<x.top()<<endl;
                x.pop();
                break;
            }
            case 3:{
                x.printStack();
            }
        }
    }
return 0;
}