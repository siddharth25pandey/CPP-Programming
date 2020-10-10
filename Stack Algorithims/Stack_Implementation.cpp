#include <iostream>

using namespace std;

template <typename T>
class Stack{

    public:
        Stack(int size);
        ~Stack(){
            delete[] arr;
        };

        bool empty();
        void push(T x);
        void pop();
        int size();
        T top();
        bool full();

    private:
        int capacity;
        int cnt;
        T* arr;
};

template <typename T>
Stack<T>::Stack(int size){
    arr = new T[size];
    capacity = size;
    cnt = 0;
}

template <typename T>
bool Stack<T>::empty(){
    if(cnt == 0) {
        return true;
    }
    else {
        return false;
    }
}

template <typename T>
void Stack<T>::push(T x){
    if(!full()) {
        arr[cnt] = x;
        cnt++;
    }
    else {
        cout << "The stack is full \n";
    }
}    

template <typename T>
void Stack<T>::pop(){
    if(!empty()){
        cnt--;
    }
    else {
        cout << "The stack is empty \n";
    }
}

template <typename T>
int Stack<T>::size(){
    return cnt;
}

template <typename T>
T Stack<T>::top(){
    return arr[cnt - 1];
}

template <typename T>
bool Stack<T>::full(){
    return capacity == cnt;
}

int main(){
    Stack<char> S(1);
    S.push('x');
    cout << S.top() << endl;
    S.pop();
    cout << S.empty() << endl;
    S.push('c');
    cout << S.full() << endl;
    cout << S.top() << endl;
    cout << S.full() << endl;
    S.push(2);
    S.pop();
    S.pop();
}



