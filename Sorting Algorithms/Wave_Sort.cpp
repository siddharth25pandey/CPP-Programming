#include<exception>
#include<limits>
#include<typeinfo>
#include<utility>
#include<functional>
#include<memory>
#include<locale>
#include<algorithm>
#include<bitset>
#include<deque>
#include<iterator>
#include<list>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<complex>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<random>
#include<string>
using namespace std;
#define ll long long int
using namespace std;
void waveSort(int arr[], int n)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i += 2)
        swap(arr[i], arr[i + 1]);
}
int main(){
// ifstream infile;
// infile.open(test_input.txt);//Add the quots to file name
    int n = 5;
    int arr[5] = {12,76,33,12,34};
    waveSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
    return 0;
}