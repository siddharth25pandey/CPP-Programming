class Solution {
public:
    vector<int> getRow(int rowIndex){
        
        vector<vector<int>> ans(34);
        for(int i=0;i<34;i++){
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        int request=rowIndex;
        vector<int> getrow(request+1);
        for(int i=0;i<request+1;i++){
            getrow[i]=ans[request][i];
    }
    return getrow;
    }
};
