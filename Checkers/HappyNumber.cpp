#include <iostream>
using namespace std;

int isHappyNumber(int n)
{
	set<int> st;
	while (1)
	{
		n = numSquareSum(n);
		if (n == 1)
			return true;
		if (st.find(n) != st.end())
			return false;
		st.insert(n);
	}
}
int main()
{
	int n;
    cin>>n;
	if (isHappyNumber(n))
		cout << "The number is "
			<< "a Happy number"
			<< endl;
	else
		cout << "The number is "
			<< "NOT a Happy number"
			<< endl;
	return 0;
}