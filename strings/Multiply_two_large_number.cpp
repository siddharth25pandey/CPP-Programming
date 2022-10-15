// Given two positive numbers as strings (s1, s2). The numbers may be very large (may not fit in long long int), the task is to find product of these two numbers.

// Constraints:
// 1 ≤ length of s1 and s2 ≤ 10^3

// # intution
/*
n1 = 123
n2 = 321
multiplication of n1 & n2;
How we multiply in maths, same approach is used here.

        1 2 3 
      x 3 2 1
        1 2 3 
    + 2 4 3 x
  + 3 2 9 x x
=   3 5 4 5 3

so simply reverse both number for easiness of indexing later we reverse our result.
now simple pick one digit from n1 and multiply with each digit of n2 then add its modulo in array with carry to an each individual digits.

reverse of resultant array will be our answer.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   // string can only contain digits ('0' to '9') as a character to be multiplied.
   // suppose if want to multiply two number, e.g. "123" and "223"
   // will be resulted as "27429" as a answer.

   string s1, s2;
   cin >> s1 >> s2;

   int n = s1.length();  // length of 1st number to traverse 
   int m = s2.length();  // length of 1st number to traverse

   // if we multiply to number then total number of digits in the result can be maximum upto sum of length of both the numbers.
   vector<int> v(n + m, 0);  // array to store the result.

   int carry = 0;
   reverse(s1.begin(), s1.end());
   reverse(s2.begin(), s2.end());
   
   for (int i = 0; i < n; i++)
   {
      int x = s1[i] - '0';
      carry = 0;
      int j = 0;
      for (; j < m; j++)
      {
         int y = s2[j] - '0';
         int mul = x * y + v[i + j] + carry;
         v[i + j] = mul % 10;
         carry = mul / 10;
      }
      if (carry != 0)
      {
         v[i + j] += +carry;
      }
   }

   reverse(v.begin(), v.end());
   int i = 0;
   while (i < m + n && v[i] == 0)  // since prior 0's are not needed in the result, so can skip.
   {
      i++; 
   }

   string result;

   while (i < m + n)
   {
      result.push_back('0' + v[i]);  // storing the result in string
      i++;
   }

   cout << result << endl; // outputted answer 

   return 0;
}