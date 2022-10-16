/********************************
CPP program to convert postfix expression 
to infix expression

Sample I/O:
Postfix expression: "abc*+de*f+g*+"
Infix expression: ((a+(b*c))+(((d*e)+f)*g))
********************************/

#include <iostream>
#include <stack>
using namespace std;

// To get Infix for a given postfix
// expression
string PostfixToInfix(string exp)
{
	stack<string> s;

	for (int i=0; exp[i]!='\0'; i++)
	{
		// Push operands
		if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z')){
			string op(1, exp[i]);
			s.push(op);
		}

		// Assuming that input is
		// a valid postfix and expect
		// an operator.
		else
		{
			string op1 = s.top();
			s.pop();
			string op2 = s.top();
			s.pop();
			s.push("(" + op2 + exp[i] +
				op1 + ")");
		}
	}

	// There must be a single element
	// in stack now which is the required
	// infix.
	return s.top();
}


int main(){
	cout << "Enter a valid Postfix expression: ";
	// taking posfix expression
	string exp;
	cin >> exp;
	//calling function PostfixToInfix and printing the infix expression
	cout << "Infix expression for given Postfix expression is: " << PostfixToInfix(exp);
	return 0;
}

