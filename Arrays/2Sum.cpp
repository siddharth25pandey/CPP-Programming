/*
-> Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
-> You may assume that each input would have exactly one solution*/

/*
-> we will solve this question using two pointer , one pointer will be pointing towards the start and another pointer will pointing towards the
the last elemnt at every iteration we will  be checking  that sum of our element at pointers is equal to the target or not*/


#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int>& nums, int target) {



        int low=0;
        int high=nums.size()-1;


        vector<int>ans;

        vector<pair<int,int>>pr;
        for(int i =0;i<nums.size();i++)
        {
            pr.push_back({nums[i],i});
        }

        sort(pr.begin(),pr.end());

        while(low<high)
        {
            if(pr[low].first+pr[high].first == target)
            {
                ans.push_back(pr[low].second);
                ans.push_back(pr[high].second);
                break;
            }

            else if(pr[low].first+pr[high].first < target) low++;
            else high--;
        }

        for(auto it:ans) cout<<it<<" ";
    }

int main()
{
  vector<int>v;
  for(int i=0;i<5;i++) v.push_back(i+1);
   int target = 9;
   twoSum(v,target);


   return 0;
}
