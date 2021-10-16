#include <iostream>
using namespace std;

int main()
{
  int NUM,digit, num, rem, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> NUM;

  num = NUM;

  while(num != 0)
  {
      digit = num%10;
      sum += digit*digit*digit;
      num /= 10;
  }

  if(sum == NUM)
    cout << NUM << " "<<"is an Armstrong number";
  else
    cout << NUM << " "<<"Not an Armstrong number";

  return 0;
}
