#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

vector<vector<int>> vec;

void solution(vector<int> &A, int B, vector<int> &v, int i)
{
    if (B == 0)
    {
        vec.push_back(v);
    }
    if (i==A.size())
    {
        return;
    }
    while (B - A[i] >= 0 && i<A.size())
    {
        v.push_back(A[i]);
        solution(A, B - A[i], v, i);
        i++;
        v.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &A, int B)
{
    sort(A.begin(), A.end());
    set<int> us(A.begin(), A.end());
    A.assign(us.begin(), us.end());
    vector<int> v;
    solution(A, B, v, 0);
    return vec;
}

int main()
{
    vector<int> A = {7, 2, 6, 5};
    vector<vector<int>> ans = combinationSum(A, 16);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
