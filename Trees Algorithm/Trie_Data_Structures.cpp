#include<iostream>

struct Trie{
    struct Trie *characters[26];
    int leaf;
};

struct Trie* getNode(){
    struct Trie *temp = NULL;
    temp = (struct Trie*)malloc(sizeof(struct Trie));
    for(int i=0;i<26;i++){
        temp->characters[i] = NULL;
    }
    temp->leaf = 0;
    return temp;
}

int searchword(const char *word,struct Trie *root){
    struct Trie *travel = root;
    int i,j;
    i=0;
    int flag = 1;
    int len = strlen(word);
    while(i < len){
        j = (int)word[i] - (int)'a';
        if(travel->characters[j] == NULL){
            flag = 0;
            break;
        }
        travel = travel->characters[j];
        i++;
    }

    if(travel != NULL && travel->leaf){
        return 1;
    }
    else{
        return 0;
    }
}


void insertword(const char *word,struct Trie* root){
    struct Trie* travel = root;
    int i=0,j=0;
    int len = strlen(word);  

    if(searchword(word,root)){
        i=0;
        while(i < len){
            j = (int)word[i] - (int)'a';
            if(travel->characters[j] == NULL){
                travel->characters[j] = getNode();
            }
            travel = travel->characters[j];
            i++;
        }
        travel->leaf++;
        printf("%d\n",travel->leaf);
        return;
    }
    i=0;
    while(i < len){
        j = (int)word[i] - (int)'a';
        if(travel->characters[j] == NULL){
            travel->characters[j] = getNode();
        }
        travel = travel->characters[j];
        i++;
    }
    travel->leaf = 1;
}

int isEmpty(struct Trie *root){
    for(int i=0;i<26;i++){
        if(root->characters[i]){
            return 0;
        }
    }
    return 1;
}

int havechar(struct Trie* root){
    for(int i=0;i<26;i++){
        if(root->characters[i]){
            return 1;
        }
    }
    return 0;
}

int deleteword(const char *word,struct Trie **root){
    if(*root == NULL){
        return 0;
    }

    if(*root){
        if(*root != NULL && (*root)->characters[*word - 'a'] != NULL && deleteword(word+1,&((*root)->characters[*word-'a']) ) && (*root)->leaf == 0){
            if(havechar(*root) == 0){
                free(*root);
                (*root) = NULL;
                return 1;
            }
            else{
                return 0;
            }
        }
    }

    if(*word == '\0' && (*root)->leaf){
        if(havechar(*root) == 0){
            free(*root);
            (*root) = NULL;
            return 1;
        }
        else{
            (*root)->leaf = 0;
            return 0;
        }
    }

    return 0;

}

void delete_it(const char *word,struct Trie *root){
    
    if(searchword(word,root)){
        int i=0,j=0;
        int len = strlen(word);
        struct Trie *travel = root;
        while(i < len){
            j = (int)word[i] - (int)'a';
            if(travel->characters[j] == NULL){
                travel->characters[j] = getNode();
            }
            travel = travel->characters[j];
            i++;
        }
        
        int duplicate = travel->leaf;
        if(duplicate >= 2){
            travel->leaf--;
        }
        else{
            deleteword(word,&root);
        }
    }
    else{
        deleteword(word,&root);
    }
    
}

int main(){

    struct Trie *root = getNode();
    char ch;
    char word[20];
    
    
    while(1){
        int key;
        printf("Enter the operation which you want to do :\n");
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.search\n");
        printf("4.to exit\n");
        scanf("%d",&key);

        if(key == 4){
            break;
        }
        switch (key){
        case 1:
                printf("Enter the word to insert: \n");
                scanf("%s",word);
                insertword(word,root);   
                break;
        case 2:
                printf("Enter the word to delete: \n");
                scanf("%s",word);
                delete_it(word,root);   
                break;
        case 3:
                printf("Enter the word to search : \n");
                scanf("%s",word);
                if(searchword(word,root)){
                    printf("YES %s word is present ! \n",word);
                }
                else{
                    printf("NO %s word is not present ! \n",word);
                }
                
                break;
        default:
            break;
        }

        
    }

    return 0;
}