/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* floydLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            return slow;
        }
    }
    return NULL;
}
Node* startPoint(Node* Intersection,Node* head){
    Node* slow = head;
    Node* fast = Intersection;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
Node *removeLoop(Node *head)
{
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* Intersection = floydLoop(head);
    if(Intersection == NULL){
        return head;
    }
    Node *getStart = startPoint(Intersection,head);
    Node* temp = getStart;
    while(temp->next!=getStart){
        temp=temp->next;
    }
    temp->next=NULL;
    return head;
    // Write your code here.
}
