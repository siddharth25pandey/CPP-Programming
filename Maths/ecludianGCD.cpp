#include <iostream>
using namespace std;
void findGcd(int n, int m)
{
    int r = n % m;
    int ans = m;
    while (r != 0)
    {
        ans = r;
        r = m % r;
    }
    cout << ans << endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    findGcd(n, m);
    return 0;
}
