#include <bits/stdc++.h>
using namespace std;
bool checkSpy(int num)
{
	int digit, sum = 0,
		product = 1;
	while (num > 0)
	{
		digit = num % 10;
		sum += digit;
		product *= digit;
		num = num / 10;
	}
	
	if (sum == product)
		return true;
	else
		return false;
}


int main()
{
	int num = 1412;
	if (checkSpy(num))
		cout << "The number is "
			<< "a Spy number"
			<< endl;
	else
		cout << "The number is "
			<< "NOT a spy number"
			<< endl;
	return 0;
}
