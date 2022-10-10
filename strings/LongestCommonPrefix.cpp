/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

#include <bits/stdc++.h>
using namespace std;

// Horizontal scanning
string longestCommonPrefix(vector<string>& strs) {
    if(strs.size()==0) return "";
    string ans = strs[0];
    for(int i=1; i<strs.size(); i++) {
        while(strs[i].find(ans)!=0) {
            ans = ans.substr(0,ans.length()-1);
            if(ans.length()==0) return "";
        }
    }
    return ans;
}

// Vertical scanning
string longestCommonPrefix2(vector<string>& strs) {
    if(strs.size() == 0) return "";
    for (int i = 0; i < strs[0].length() ; i++){
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); j ++) {
            if (i == strs[j].length() || strs[j][i] != c)
                return strs[0].substr(0, i);             
        }
    }
    return strs[0];
}

int main()
{
    int n;
    cin>>n;
    vector<string> str(n,"");
    for(int i=0; i<n; i++) {
        cin>>str[i];
    }

  cout<<longestCommonPrefix11(str)<<endl;  
  cout<<longestCommonPrefix2(str)<<endl;

    return 0;
}
