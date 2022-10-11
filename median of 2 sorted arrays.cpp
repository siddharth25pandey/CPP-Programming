#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        vector<double>ans;

for(int i=0;i<array1.size();i++)

  ans.push_back(array1[i]);

for(int i=0;i<array2.size();i++)

  ans.push_back(array2[i]);

  sort(ans.begin(),ans.end());

  

        if(ans.size()%2 == 0)

 

        {

 

            return ((double)ans[ans.size()/2]+(double)ans[ans.size()/2-1])/2;

 

        }

        return ans[ans.size()/2];
    
    }
};