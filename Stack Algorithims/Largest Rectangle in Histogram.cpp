class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        /*stack<int>s;
        int ans=0;
        int i=0;
        int area_top=0;
        while(i<heights.size())
        {
            if(s.empty() or heights[s.top()]<heights[i])s.push(i++);
            else 
            {
                int top=s.top();
                s.pop();
                area_top=heights[top]*(s.empty()?i:i-s.top()-1);
                ans=max(ans,area_top);
            }
        }
        while(!s.empty())
        {
            int top=s.top();
            s.pop();
            area_top=heights[top]*(s.empty()?i:i-s.top()-1);
            ans=max(ans,area_top);   
        }
        return ans;*/
        int n = heights.size();
        if(n == 0) return 0; // Base Condition
        int maxArea = 0;
        vector<int> left(n); //fill left boundary
        vector<int> right(n); // fill right boundary
        
        left[0] = -1;
        right[n - 1] = n;
        
        for(int i = 1; i < n; i++){
            int prev = i - 1; // previous for comparing the heights
            while(prev >= 0 and heights[prev] >= heights[i]){
                prev = left[prev]; // we have done this to minimise the jumps we make to the left
            }
            left[i] = prev;
        }
        // Similarly we do for right
        for(int i = n - 2; i >= 0; i--){
            int prev = i + 1; 
            while(prev < n and heights[prev] >= heights[i]){
                prev = right[prev]; 
            }
            right[i] = prev;
        }
        // once we have these two arrays fill we need width & area
        for(int i = 0; i < n; i++){
            int width = right[i] - left[i] - 1;
            maxArea = max(maxArea, heights[i] * width);
        }
        return maxArea;
    
    }
};