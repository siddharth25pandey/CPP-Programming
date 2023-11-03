class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int x=0; x<nums.size()-1;x++)
        {
            if(nums[x]==nums[x+1])
            {
                nums.erase(nums.begin()+x);
                x--;//reset pointer
            }
        }
            
    return nums.size();
    }
};
