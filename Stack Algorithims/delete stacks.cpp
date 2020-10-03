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

  stack1.pop();
  stack1.pop();

  while (!stack1.empty())
  {
    cout << "Element =" << stack1.top() << endl;
    stack1.pop();
  }
}
