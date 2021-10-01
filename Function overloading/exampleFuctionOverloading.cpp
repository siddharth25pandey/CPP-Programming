#include <iostream>
using namespace std;

/* Function arguments are of different data type */

int add(int, int);
float add(float, float);

int main()
{
  int a, b, x;
  float c, d, y;

  cout << "Enter two integers\n";
  cin >> a >> b;

  x = add(a, b);

  cout << "Sum of integers: " << x << endl;

  cout << "Enter two floating point numbers\n";
  cin >> c >> d;

  y = add(c, d);

  cout << "Sum of floats: " << y << endl;

  return 0;
}

int add(int x, int y)
{
  int sum;

  sum = x + y;

  return sum;
}

float add(float x, float y)
{
  float sum;

  sum = x + y;

  return sum;
}
