/* Nitigya Joshi
   S20200010150
   UG-2 */

#include <vector>
#include <iostream>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &a, int k)
{
    int n = a.size(), i = 0;
    if (n <= 1)
        return a;

    vector<int> ans(n - k + 1);
    deque<int> dq(k);

    for (; i < k; i++)
    {
        while (!dq.empty() && a[dq.back()] <= a[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (; i < n; i++)
    {
        ans[i - k] = a[dq.front()];

        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while (!dq.empty() && a[dq.back()] <= a[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans[i - k] = a[dq.front()];

    return ans;
}

int main(void)
{
    int k = 3;
    vector<int> a = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = a.size();

    vector<int> out = maxSlidingWindow(a, k);   
    for(int i=0; i<out.size(); i++)
        cout << out[i] << " ";
    
    return 0;
}