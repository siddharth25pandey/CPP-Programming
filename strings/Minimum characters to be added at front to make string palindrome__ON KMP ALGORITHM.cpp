int minChar(string str){

         string s=str;

         reverse(s.begin(),s.end());

         str+='#';

         str+=s;

         int n=str.size();

         vector<int>lps(n,0);

         for(int i=1;i<n;i++){

             int j=lps[i-1];

             while(j>0&&str[i]!=str[j]){

                 j=lps[j-1];

             }

             

             if(str[i]==str[j]){

                 j++;

             }

             lps[i]=j;

           }

         

         return (n/2)-lps[n-1];

         }