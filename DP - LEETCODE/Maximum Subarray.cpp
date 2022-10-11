/* 
Given an integer array nums, find the contiguous subarray
 (containing at least one number) which has the largest sum and 
 return its sum.

A subarray is a contiguous part of an array.

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int overall_max = nums[0], max_ending_here = nums[0];
        for(int i=1; i<nums.size(); i++) {
            max_ending_here = max(nums[i],nums[i]+max_ending_here);
            overall_max = max(overall_max, max_ending_here);
        }
        return overall_max;
    }
};