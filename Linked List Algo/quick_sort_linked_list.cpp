#include<iostream>
using namespace std;
#define node Node

class Node{
    public:
        int data;
        Node * next;

        Node(int d):data(d){
            this->next = NULL;
        }
};

class LinkedList{

    public:
        Node * push(Node * head , Node * tail , int d){
            if(head == NULL){
                head = new Node(d);
                tail = head;
            }
            else{
                tail->next = new Node(d);
                tail = tail->next;
            }
            return tail;
        }

        void disp(Node * head){
            
            for( ; head != NULL ; head = head->next){
                cout<<head->data<<" ";
            }
            return ;
        }
        
        void segregate(node * head , node * &less , node * &more , int data){
    
            if(head == NULL){
                return ;
            }
            
            node * tail1 = NULL;
            node * tail2 = NULL;
            
            while(head != NULL){
                node * temp = head->next;
                head->next = NULL;
                if(head->data <= data){
                    if(less == NULL){
                        less = head;
                    }
                    else{
                        tail1->next = head;
                    }
                    tail1 = head;
                }
                else{
                    
                    if(more == NULL){
                        more = head;      
                    }
                    else{
                        tail2->next = head;
                    }
                    tail2 = head;
                }
                head = temp;
            }
            return ;
        }

        Node * quick_sort(Node * head){
            if(head == NULL || head->next == NULL){
                return head;
            }
 
            node * less = NULL;
            node * more = NULL;
            
            
            node * temp = head->next;
            head->next = NULL;
            
            segregate(temp , less , more , head->data);
            
            less = quick_sort(less);
            more = quick_sort(more);
            
            head->next = more;
            
            if(less != NULL){
                Node * temp = less;

                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = head;
                return less;
            }
            
            return head;
        }

};

int main(){

    LinkedList l1;

    int n;
    cout<<"Enter no of nodes: ";
    cin>>n;
    Node * head = NULL;
    Node * tail = NULL;

    cout<<"Enter nodes: ";
    for(int i = 0 ; i < n ; ++i){
        int d;
        cin>>d;
        tail = l1.push(head , tail , d);

        if(head == NULL){
            head = tail;
        }

    }

    head = l1.quick_sort(head);

    l1.disp(head);

    return 0;
}
