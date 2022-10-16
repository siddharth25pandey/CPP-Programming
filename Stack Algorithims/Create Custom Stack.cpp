#include<iostream>
using namespace std;

template<typename X>
class coustomStack{
    X *arr;
    int ptr = -1;
    const int DEFAULT_SIZE = 5;
    int len = DEFAULT_SIZE;
    public:
    coustomStack(){
        arr = new X[DEFAULT_SIZE];

    }

    bool isEmpty(){
        return ptr==-1;
    }
    void push(X val){
        if(ptr == len-1){
            X *temp = new X[len*2];
            for(int i=0; i<len; i++){
                temp[i] = arr[i];
            }
            len *= 2;
            arr = temp;
        }
        ptr++;

        arr[ptr] = val;
    }
    X pop(){
        if(this->isEmpty()){
            cout<<"stack is empty"<<endl;
            throw invalid_argument("empty stack exception");
        }
        X val = arr[ptr];
        ptr--;
        return val;
    }

    void display(){
        for(int i = ptr; i>=0; i--){
            cout<<arr[i]<<"->";
        }
        cout<<"END"<<endl;
    }

};

int main(){
    coustomStack<int> stk;
    int x;
    stk.push(4);
    stk.push(10);
    stk.push(6);
    stk.push(1);
    stk.push(13);
    stk.push(2);
    stk.push(3);
    cout<<stk.pop()<<endl;
    stk.push(15);
    cout<<"stack starting from here___"<<endl;
    stk.display();

    return 0;
}