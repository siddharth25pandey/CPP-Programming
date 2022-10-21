#include <bits/stdc++.h>

bool check(int i,int j,string &s){
    while(i<j){
        if(s[i]!=s[j])return 0;
        i++;j--;
    }
    return 1;
}

int bruh(int idx,string &s,vector<int>&dp){
    if(idx==s.size())return 0;
    if(dp[idx]!=-1)return dp[idx];
    int ans=1e9;
    for(int i=idx;i<s.size();i++){
        if(check(idx,i,s)){
            int p=1+bruh(i+1,s,dp);
            ans=min(ans,p);
        }
    }
//    if(ans==1e9)return 0; no need of it
    return dp[idx]=ans;
}

int palindromePartitioning(string s) {
    vector<int>dp(s.size()+1,0);
//     return bruh(0,s,dp)-1;
    for(int idx=s.size()-1;idx>=0;idx--){
        int ans=1e9;
        for(int i=idx;i<s.size();i++){
        if(check(idx,i,s)){
            int p=1+dp[i+1];
            ans=min(ans,p);
            }
        }
//         if(ans==1e9)continue;
        dp[idx]=ans;
    }
    return dp[0]-1;
    
}
