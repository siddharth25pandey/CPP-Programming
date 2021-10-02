#include<iostream>
#define max_size 100
using namespace std;
class stack{
    public:
    char stack_arr[max_size+1];
    int top;
    stack(){
        top=-1;
    }
    bool isfull(int top){
        if(top==max_size){
            return 1;
        }
        return 0;
    }
    bool isempty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }
    void push(char value){
        if(isfull(top)){
            cout<<"Stack is full. Nothing can be pushed into it."<<endl;
        }
        else{
            top++;
            stack_arr[top] = value;
        }
    }
    char pop(){
        if(isempty()){
            cout<<"Stack is empty, so nothing can be poped."<<endl;
            return -1;
        }
        else{
            char temp = stack_arr[top];
            top--;
            return temp;
        }
    }
    int size(){
        return top+1;
    }
    char top_element(){
        char temp = stack_arr[top];
        return temp;
    }
};
bool isOperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch=='('){
        return 1;
    }
    return 0;
}
int precedence(char ch){
    if(ch=='^')return 3;
    else if(ch=='*'||ch=='/')return 2;
    else if(ch=='+'||ch=='-')return 1;
}
int main(){
    stack obj;
    string s;
    cout<<"Enter infix expression which will then be converted into postfix:";
    cin>>s;
    string output;
    for(int i=0;i<s.length();i++){
        if(!isOperator(s[i])){
            output.push_back(s[i]);
        }
        else if(s[i]=='('){
            obj.push(s[i]);
        }
        else if(s[i]==')'){
            while(obj.top_element()!='('){
                output.push_back(obj.top_element());
                obj.pop();
            }
            obj.pop();
        }
        else{
            if(obj.isempty()){
                obj.push(s[i]);
            }
            else if(precedence(s[i])>precedence(obj.top_element())){
                obj.push(s[i]);
            }
            else if(precedence(s[i])==precedence(obj.top_element())&&s[i]=='^'){
                obj.push(s[i]);
            }
            else{
                while(!obj.isempty() && precedence(s[i])<=precedence(obj.top_element())){
                    output.push_back(obj.top_element());
                    obj.pop();
                }
                obj.push(s[i]);
            }
        }
    }
    while(!obj.isempty()){
        output.push_back(obj.pop());
    }
    cout<<output<<endl;

    return 0;
}
