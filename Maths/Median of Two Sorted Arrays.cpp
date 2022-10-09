class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>num;
        int i=0,j=0;
        while(i<n and j<m)
        {
            if(nums1[i]<=nums2[j]) 
            {
                num.push_back(nums1[i++]);
               
            }
            else if(nums1[i]>nums2[j]) 
             {
                 num.push_back(nums2[j++]);
                
             }
            
        }
        while(i<n)
        {
            num.push_back(nums1[i++]);
        }
          while(j<m)
        {
            num.push_back(nums2[j++]);
        }
       double ans=0.0;
        int k=num.size();
        k/=2;
        if(num.size()&1)
        {
            ans=num[k];
        }
        else 
        {
            ans=(num[k-1]+num[k])/2.0;
        }
        return ans;
        
    }
};