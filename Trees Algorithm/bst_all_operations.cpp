#include <stdio.h>
#include <stdlib.h>

int temp , t ;
void choice() ;
void insert() ;
int search() ;
void delete() ;

typedef struct node {
    int data ;
    struct node *left ;
    struct node *right ;
} node1 ;
node1 *root  = NULL ;

void choice() {
    printf("enter your choice  1.insert 2.delete 3.search \n") ;
    scanf("%d",&t) ;
    switch(t) {
        case 1 :
        insert() ;
        break ;

        case 2 :
        printf("enter the element to delete\n") ;
        scanf("%d",&temp) ;
        delete(temp) ;
        break ;

        case 3 :
        t  = search()  ;
        if(t==1) {
            printf("it is in tree\n") ;
        } 
        else if(t==5) {
            printf("zero nodes") ;
        }
        else {
            printf("not in tree\n") ;
        }
        break ;
    }    
    choice() ;
}


void insert() {
    node1 *current ;
    int element ;
    printf("enter the element\n") ;
    scanf("%d",&element) ;
    node1 *new ;
    new = (node1*)malloc(sizeof(node1)) ;
    new->right=NULL;
    new->left=NULL;
    new->data = element ;
    if(root==NULL) {
        root = new ;
        root->data = element ;
    }
    else {
        node1 *parent ;
        current = root ;
        while(current) {
            parent = current ;
            if(element >current->data) {
                current = current->right ;
            }
            else {
                current = current->left ;
            }
        }
        if(element>parent->data) {
            parent->right = new ;
        }
        else {
            parent->left = new ;
        }
    }
}

void  delete(int element) {
    node1 *current ;
    if(root==NULL) {
        printf("can't delete\n") ;
    }
    else if(root->data==element) {
        root = NULL ;
        return ;
    }
    else {
        node1 *parent ;
        current = root ;
        while(current) {
            parent = current ;
            if(element>current->data) {
                current = current->right ;
                if(current->data==element) {
                    if((current->left==NULL)&&(current->right==NULL)) {
                        parent->right = NULL ;
                        return ;
                    }
                    else if((current->left==NULL)&&(current->right!=NULL)) {
                        parent->right = current->right ;
                        return ;
                    }
                    else if ((current->left!=NULL)&&(current->right==NULL)) {
                        parent->right = current->left ;
                        return ;
                    }
                    else if((current->left!=NULL)&&(current->right!=NULL)) {
                        node1 *ptr ;
                        ptr = current->right ;
                        while (ptr->left!=NULL) {
                            ptr = ptr->left ;
                        }
                        temp = ptr->data ;
                        delete(temp) ;
                        current->data = temp;
                        return ;
                    }
                }
            }
            else{
                current = current->left ;
                if((current->data)==element) {
                    if((current->left==NULL)&&(current->right==NULL)) {
                        parent->left = NULL ;
                        return ;
                    }
                    else if((current->left==NULL)&&(current->right!=NULL)) {
                        parent->left = current->right ;
                        return ;
                    }
                    else if ((current->left!=NULL)&&(current->right==NULL)) {
                        parent->left = current->left ;
                        return ;
        
                    }
                    else if((current->left!=NULL)&&(current->right!=NULL)) {
                        node1 *ptr ;
                        ptr = current->right ;
                        while (ptr->left!=NULL) {
                            ptr = ptr->left ;
                        }
                        temp = ptr->data ;
                        printf("  %d  ",temp) ;
                        delete(temp) ;
                        current->data = temp ;
                        return ;
                    }
                }                
            }
        }
    }
}

int search() {
    node1 *current ;
    int element ;
    printf("enter the element to search\n") ;
    scanf("%d",&element) ;
    node1  *parent;
    current = root ;
    if(root==NULL) {
        printf("cant search zero nodes\n") ;
        return 5 ;
    }
    else if(root->data==element) {
        return 1 ;
    }
    else {
        while(current) {
            parent= current ;
            if(element<current->data) {
                current = current->left ;
                if(current==NULL) {
                    return 0 ;
                }
                if(current->data ==element) {
                    return 1 ;
                }
            }
            else {
                if(current->data<element) {
                    current = current->right ;
                    if(current==NULL) {
                        return 0 ;
                    }
                    if(current->data==element) {
                        return 1 ;
                    }
                }
            }
        }
        return 6 ;
    }
}

int main () {
    choice() ;  
}
