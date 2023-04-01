#include <iostream>

// Using 'nampespace std;' is considered as bad programming practice.
using std::cin;
using std::cout;
using std::endl;

class Node {
    public:
        int data;
        Node *next;
    //Unparameterized constructor
    Node() {
        data = -1;
        next = NULL;
    }
    //Parameterized constructor
    Node (int data) {
        this->data = data;
        this->next = NULL;
    }
    //Desstructor to destroy the nodes and free memory allocated to the nodes.
    ~Node() {
        cout << endl << "All the node have been destroyed..!!";
    }
};

  
class LinkedList {
    public:
        Node *head = NULL;
        //Destructor to detroy the linked list and free memory allocated the list.
        ~LinkedList() {
            cout << endl << "List has been Destroyed...!!!";
        }
        void Insert(int data);
        void Display();
};

void LinkedList::Insert(int data) {
    //If the list is empty create a Node
    Node *newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    else {
        Node *temp = head;
        //Traverse to the end of the list
        while(temp->next != NULL) {
            temp = temp->next;
        }
        //Link the newNode to the last node in the list.
        temp->next = newNode;
        return;
    }
}

void LinkedList::Display() {
    //Check if the list is empty.
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    //Traverse to each node and display the data of the node.
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {

    //Object of class LinkedList.
    LinkedList list;
    int temp,ch;
    //Menu driven program.
    do {
        cout << "\t\t      MENU" << endl;
        cout << "\t\t1.Insert" << endl;
        cout << "\t\t2.Display" << endl;
        cout << "\t\t3.Exit" << endl;
        cout << "Enter your choice: [  ]\b\b" << endl;
        cin >> ch;
        switch(ch) {
                case 1:
                    cin >> temp;
                    list.Insert(temp);
                break;
                case 2:
                    list.Display();
                break;
                case 3:
                    return 0;
                break;
        }
    }while(ch != 3);
}
