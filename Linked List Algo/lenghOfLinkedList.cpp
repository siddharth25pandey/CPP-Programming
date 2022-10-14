#include <iostream>
using namespace std;
//Linked List Node class
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
//function to calculate the no. of nodes in a Linked List
int length(Node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}

int main()
{
	Node *head = takeinput();
	cout << length(head) << endl;
	return 0;
}

/*
Sample Input:
4 4 7 8 3 36 8 17 26 7 7 -1
Sample Output
11
*/
