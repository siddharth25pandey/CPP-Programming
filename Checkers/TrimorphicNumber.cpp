#include <iostream>
using namespace std;
bool isTrimorphic(int N)
{
	int cube = N * N * N;
	while (N > 0)
	{
		if (N % 10 != cube % 10)
			return false;
		N /= 10;
		cube /= 10;
	}

	return true;
}

int main()
{
	int N = 24;

	isTrimorphic(N) ? cout << "trimorphic" :
					cout << "not trimorphic";

	return 0;
}
