// leetcode problemlink->https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    int d=0;
    int t=0;
    int b=matrix.size()-1;
    int l=0;
    int r=matrix[0].size()-1;
        vector<int> ans;
    

    while(t<=b && l<=r){
        
        if(d==0){
            for(int i=l; i<=r; i++){
                ans.push_back(matrix[t][i]);
              
            }
          t++;
        }
     else if(d==1){
            for(int i=t; i<=b ; i++ ){
                ans.push_back(matrix[i][r]);
                  
                
            }
            r--;
        }
          else if(d==2){
            for(int i=r; i>=l; i--){
                ans.push_back(matrix[b][i]);
                 
            }
            b--;
            
        }
           else if(d==3){
            for(int i=b; i>=t; i--){
            ans.push_back(matrix[i][l]);
            
            }
             l++; 
            
        }
         d=(d+1)%4;     
         }
    
      return ans;
    
    
      }

      
    
};