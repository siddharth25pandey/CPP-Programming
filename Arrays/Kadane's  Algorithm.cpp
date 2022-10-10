/*
Kadane's Algorithm:
Initialize:
    max_so_far = INT_MIN
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far*/


long long maxSubarraySum(int arr[], int n){
        
        // Kadane Space Optimization
        int prevSum = arr[0];
        int ans = prevSum;
        
        for( int i=1; i<n; i++ ){
            prevSum = max( arr[i], prevSum + arr[i] );
            ans = max( ans, prevSum );
        }
        
        return ans;
    }
