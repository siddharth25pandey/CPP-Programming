class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0, right=nums.size()-1, mid, r=INT_MAX;

        while(left<=right) {
            mid = (left+right)/2; 
            r = min(r, nums[mid]);
            if(nums[left] <= nums[mid]) {
                if(nums[left] <= nums[right])
                    right = mid-1;
                else 
                    left = mid+1;
            } else {
                right = mid-1;
            }
        }
        return r;
    }
};
