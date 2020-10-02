#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<int> stack1; //empty stack of integer type
  stack1.push(100);
  stack1.push(200);
  stack1.push(300);
  stack1.push(400);
  stack1.push(500);

  cout << "The topmost element of the stack is:" << stack1.top() << endl;
  cout << "The size of the stack is=" << stack1.size() << endl;

  if (stack1.empty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Stack is not empty" << endl;
  }
}
