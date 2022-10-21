#include <iostream>
#include <cmath>
using namespace std;
bool isPronicNumber(int num) {
   for (int i = 0; i <= (int)(sqrt(num)); i++)
      if (num == i * (i + 1))
         return true;
   return false;
}
int main() {
   for (int i = 0; i <= 200; i++)
   if (isPronicNumber(i))
      cout << i << " ";
}