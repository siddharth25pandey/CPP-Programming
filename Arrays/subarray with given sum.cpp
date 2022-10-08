vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        int sum =0, i=0, j=0;
        
        // if sum =0
        if(s==0){
            for(i=0; i<n; i++){
                if(a[i] == 0){
                    return {i+1, i+1};
                    break;
                }
            }
        }
        
        // i will give first index, j will give ending index
        while( (i<n)&&(j<=n) ){
            if(sum<s){
                sum+=a[j];
                j++;
            }
            else if(sum>s){
                sum-=a[i];
                i++;
            }
            else if(sum==s){
                return{i+1, j};
                break;
            }
        }
        return {-1};
    }
