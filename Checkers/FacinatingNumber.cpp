#include <bits/stdc++.h>
using namespace std;
bool isFascinating(int num)
{
	int freq[10] = {0};
	string val = "" + to_string(num) +
					to_string(num * 2) +
					to_string(num * 3);

	for (int i = 0; i < val.length(); i++)
	{
		int digit = val[i] - '0';
		if (freq[digit] and digit != 0 > 0)
			return false;
		else
			freq[digit]++;
	}
	for (int i = 1; i < 10; i++)
	{
		if (freq[i] == 0)
			return false;
	}
	return true;
}


int main()
{
	int num = 192;
	if (num < 100)
		cout << "No" << endl;

	else
	{
		
		bool ans = isFascinating(num);
		if (ans)
			cout << "Yes";
		else
			cout << "No";
	}
}

