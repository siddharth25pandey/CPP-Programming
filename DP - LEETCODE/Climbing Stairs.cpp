class Solution {
public:
    int climbStairs(int n) {
       // vector<int>steps;
/*steps.push_back(1);
steps.push_back(2);*/
/*int first=1, second=2;
int res=0;
    if(n==1) return 1;
        if(n==2) return 2;
for(int i=3;i<=n;i++)
{
	//steps.push_back(steps[i-1]+steps[i-2]);
	res=first+second;
	first= second;
	second=res;
}
return res;*/
//return steps[n-1];
    long long int a[n+1];
		a[0]=1;
		a[1]=2;
		for(int i=2;i<=n;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		return a[n-1];
        


    }
};
