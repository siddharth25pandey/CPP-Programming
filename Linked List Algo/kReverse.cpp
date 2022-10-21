
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* reverse(Node* head, int k)
{
	if (!head)
		return NULL;
	Node* current = head;
	Node* next = NULL;
	Node* prev = NULL;
	int count = 0;

	while (current != NULL && count < k) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}

	if (next != NULL)
		head->next = reverse(next, k);

	return prev;
}

void push(Node** head_ref, int new_data)
{

	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;

	push(&head, 45);
	push(&head, 78);
	push(&head, 12);
	push(&head, 23);
	push(&head, 56);
	push(&head, 89);
	push(&head, 85);
	push(&head, 52);
	push(&head, 10);

	cout << "Given linked list \n";
	printList(head);
	head = reverse(head, 4);

	cout << "\nReversed Linked list \n";
	printList(head);

	return (0);
}

