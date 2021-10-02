// Link: https://leetcode.com/problems/trapping-rain-water/

int trap(vector<int>& height) {
        int n = height.size();
        if(n < 3)
            return 0;
        
        int *left = new int[n];
        int *right = new int[n];
        
        left[0] = height[0];
        for(int i=1; i<n; i++)
        {
            left[i] = max(left[i-1], height[i]);
        }
        
        right[n-1] = height[n-1];
        
        for(int i=n-2; i>=0; i--)
        {
            right[i] = max(right[i+1], height[i]);
        }
        
        int res = 0;
        for(int i=1; i<n-1; i++)
        {
            res += (min(left[i],right[i]) - height[i]);
        }
        
        return res;
    }

int main(){
  
  return 0;
  
}
