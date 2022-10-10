class Solution {
public:
    string minWindow(string s, string t) {
          unordered_map<char, int> letters; //unordered map for storing the characters in t that we need to check for in s
        for(auto &i : t) letters[i]++; 
        int count = 0; //counts number of t's letters in current window
        int low = 0, ans = INT_MAX, min_start = 0;     
        for(int i = 0; i<s.size(); i++) {
            if(letters[s[i]] > 0) count++; //means that this letter is in t   
            letters[s[i]]--; //reduce the count for the letter on which we are currently 
            if(count == t.size()) { //if current windows contains all of the letters in t
                while(low < i and letters[s[low]] < 0) letters[s[low]]++, low++; //move low ahead if its not of any significance
                if(ans > i-low) ans = i-(min_start=low)+1; //update the min length
                letters[s[low++]]++; //move low ahaead and also increment the value
                count--; //count-- as we are moving low ahead & low pointed to a char in t before
            }
        }
        return ans == INT_MAX ? "" : s.substr(min_start, ans); //check for edge case & return the result
    }
};