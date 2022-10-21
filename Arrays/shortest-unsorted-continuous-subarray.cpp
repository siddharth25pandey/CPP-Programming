class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        
        
        int n = nums.size();
        
        if(n <= 1) {
            return 0;
        }
        
        int maxPrefixArray[n];
        int minSuffixArray[n];

        maxPrefixArray[0] = nums[0];

        for(int i = 1; i < n; i++) {
            maxPrefixArray[i] = max(maxPrefixArray[i - 1], nums[i]);
        }

        minSuffixArray[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            minSuffixArray[i] = min(minSuffixArray[i + 1], nums[i]);
        }

        int l = -1, h = -1;

        for(int i = 0; i < n; i++) {
            if(i == 0 && nums[i] > minSuffixArray[i + 1]) {
                l = i;
                break;
            }
   
            if(i == n - 1 && nums[i] < maxPrefixArray[i - 1]) {
                l = i;
                break;
            }
   
            if((i != 0 && i != n - 1) && (nums[i] > minSuffixArray[i + 1] || nums[i] < maxPrefixArray[i - 1])) {
                l = i;
                break;
            }
        }

        for(int i = n - 1; i >= 0; i--) {
           if(i == n - 1 && nums[i] < maxPrefixArray[i - 1]) {
               h = i;
               break;
           }

           if(i == 0 && nums[i] > minSuffixArray[i + 1]) {
               h = i;
               break;
           }

           if((i != 0 && i != n - 1) && (nums[i] > minSuffixArray[i + 1] || nums[i] < maxPrefixArray[i - 1])) {
               h = i;
               break;
           }
        }

   
    if(l == -1 && h == -1) {
       return 0;
    }
        
    return h - l + 1;
   

    }
};
