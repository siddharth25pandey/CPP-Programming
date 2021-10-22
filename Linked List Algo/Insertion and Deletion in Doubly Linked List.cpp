#include <iostream>
using namespace std;

// structure of Doubly Linked List (DLL)
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} DLL;

// initialising head pointer
DLL *head;

void insert(int val)
{
    // Allocating space and storing val top new Node
    DLL *newNode = (DLL *)malloc(sizeof(DLL *));
    newNode->data = val;

    // Adding node in the beginning
    newNode->next = head;

    // creating backward link
    if(head != NULL) head->prev = newNode;

    // making new node as head node
    head = newNode;
}

void deleteNode(int val)
{
    DLL *temp = head;
    // iterating through the List
    while (temp != NULL)
    {
        // Finding the element
        if (temp->data == val)
        {
            // only one node is present
            if (temp->prev == NULL && temp->next == NULL)
            {
                head = NULL;
                free(temp);
                return;
            }
            // node is present in middle of the List
            if (temp->prev != NULL && temp->next != NULL)
            {
                DLL *rear = temp->prev;
                DLL *forward = temp->next;
                rear->next = forward;
                forward->prev = rear;
                free(temp);
                return;
            }
            // First node
            if (temp->prev == NULL)
            {
                head = temp->next;
                head->prev = NULL;
                free(temp);
                return;
            }
            // Last node
            if (temp->next == NULL)
            {
                temp->prev->next = NULL;
                free(temp);
                return;
            }
        }
        temp = temp->next;
    }
}

// printing List
void printList()
{
    DLL *ptr;
    ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << ptr->data << "\n";
}

int main()
{
    // creating List
    insert(10);
    insert(9);
    insert(8);
    insert(7);
    insert(6);
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);

    cout << "Original List\n";
    printList();

    // case when node to be deleted is in the middle
    deleteNode(5);
    cout << "\nList after deleting 5\n";
    printList();

    // case when first node is to be deleted
    deleteNode(1);
    cout << "\nList after deleting 1\n";
    printList();

    // case when last ndoe is to be deleted
    deleteNode(10);
    cout << "\nList after deleting 10\n";
    printList();
    return 0;
}

/*
Output from the above code
---------------------------------------
Original List
1->2->3->4->5->6->7->8->9->10

List after deleting 5
1->2->3->4->6->7->8->9->10

List after deleting 1
2->3->4->6->7->8->9->10

List after deleting 10
2->3->4->6->7->8->9
---------------------------------------
*/
