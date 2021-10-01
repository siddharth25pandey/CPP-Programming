

class Solution {
public:
    unordered_map<string, vector<string>> m;
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {    
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        return solve(s, dict);
    }
    
    vector<string>solve(string s, unordered_set<string> dict){       //recursive function
        int n = s.size();
        if(m.count(s)) return m[s]; //take from memory
        vector<string> result;
        if(dict.count(s)){ //a whole string is a word
            result.push_back(s);
        }
        for(int i=1;i<s.size();++i){
            string word=s.substr(i, n);  
            if(dict.count(word)){
                string rem=s.substr(0,i);
                vector<string> prev=combine(word,solve(rem,dict));     //recursion
                result.insert(result.end(),prev.begin(), prev.end());
            }
        }
        m[s]=result; //memorize
        return result;
    }
    
    
    
    vector<string> combine(string word, vector<string> prev){        // string (s) = rem(s[0:i]) + word( substring s[i:n])
        for(int i=0;i<prev.size();++i){
            prev[i]+=" "+word;
        }
        return prev;
    }
      
    
};

