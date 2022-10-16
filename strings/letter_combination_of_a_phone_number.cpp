#include<bits/stdc++.h>
using namespace std;

void backt(string digits , string num , vector<string> &ans , int i , string temp)
{
	if (i == digits.size())
	{
		ans.push_back(temp);
		return;
	}
	string val = nums[digits[i] - '0'];
	for (int j = 0 ; j < val.size() ; j++)
	{
		backt(digits , num , ans , i + 1 , temp + val[j]);
	}
}
int main()
{
	string A;
	cin >> A;
	string num[10] = {
		"0" , "1" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"
	}
	vector<string> ans;
	backt(A , num , ans , 0 , "");
	for (int i = 0 ; i < ans.size() ; i++)
	{
		cout << ans[i] << "\t";
	}
	return 0;
}
