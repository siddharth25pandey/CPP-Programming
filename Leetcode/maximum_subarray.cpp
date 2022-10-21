/*The idea of Kadane’s algorithm is to maintain a variable sum that stores the maximum sum contiguous subarray ending at current index and a variable ans 
which stores the maximum sum of contiguous subarray found so far. Everytime there is a positive-sum value in sum compare it with ans and update ans if it is 
greater than ans.*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum+=nums[i];
            ans = max(sum,ans);
            if(sum<0){
                sum = 0;
            }
        }return ans;
    }
};
