class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        vector<int>mp(26,0);
        int pos=0;
        for(int i=0;i<p.length();i++){
            mp[p[i]-'a']++;
            if(mp[p[i]-'a']==1)
                pos++;
        }
        int l=0,r=0;
        string str="-1";
        int ans=INT_MAX;
        while(r<s.length()){
            mp[s[r]-'a']--;
            if(mp[s[r]-'a']==0)
                pos--;
            while(mp[s[l]-'a']<0){
                mp[s[l++]-'a']++;
            }
            if(pos==0){
                if(ans>r-l+1){
                    ans=r-l+1;
                    str=s.substr(l,r-l+1);
                }
            }
            r++;
            
        }
        return str;
    }
};