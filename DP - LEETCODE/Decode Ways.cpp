class Solution {
public:
    int numDecodings(string s) {
        vector<int>v(101,0);
        if(s[0]=='0')return 0;
        if(s.size()==1) return 1;
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=s.size();i++)
        {
            int one =s[i-1]-'0';
            string temp=s.substr(i-2,2);
            if(one>=1)v[i]+=v[i-1];
            if(stoi(temp)>=10 and stoi(temp)<=26)
            {
                v[i]+=v[i-2];
            }
        }
        return v[s.size()];
    }
};