#include<bits/stc++.h>
public int Jump(int[] nums)
{
	var n = nums.Length;
	var dp = new int[n];
	dp[n - 1] = 0;
	for(var i = n-2; i >= 0; ++i)
	{
		var min = 10001;
		for(var s = 1; s <= nums[i]; ++s)		
			min = Math.Min(min, 1 + dp[Math.Min(i + s, n - 1)]);		
		dp[i] = min;
	}
	return dp[0];
}
