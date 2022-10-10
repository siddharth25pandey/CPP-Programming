class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> dup;
        for(auto vec : grid)
        {
            for(int i:vec)dup.push_back(i);
        }
        sort(dup.begin(), dup.end());
        int ans = 0;
        int mid = dup.size()/2;
        int i = 0;
        int req;
        while(i < mid)
        {
            req = dup[mid] - dup[i];
            if(req % x == 0) ans += (req/x);
            else return -1;
            i++;
        }
        i++; //mid
        while(i < dup.size())
        {
            req = dup[i] - dup[mid];
            if(req % x == 0) ans += (req/x);
            else return -1;
            i++;
        }
        return ans;
    }
};
