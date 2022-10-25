class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        int dx[]={-1,-1,0,1,1,1,0,-1};
        int dy[]={0,1,1,1,0,-1,-1,-1};
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cur=board[i][j];
                int val=1;
                int c=0;
                for(int k=0;k<8;k++){
                    int x=i+dx[k];
                    int y=j+dy[k];
                    if(x>=0 && x<n && y>=0 && y<m){
                        if(abs(board[x][y])==1)c++;
                    }
                }
                
                if(cur==0){
                    if(c==3){
                        // now for others it is 0
                        // but it will be 1
                        board[i][j]=-2;
                    }
                }else{
                    if(c<2 || c>3){
                        // we want that it is still one for others 
                        // but it is actually 0
                        board[i][j]=-1;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==-2)board[i][j]=1;
                else if(board[i][j]==-1)board[i][j]=0;
            }
        }
        
    }
};
