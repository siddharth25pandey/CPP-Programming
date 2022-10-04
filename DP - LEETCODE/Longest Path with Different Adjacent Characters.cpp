#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:

    vector<int> maxPath(vector<vector<int>>& graph,string& s,int node)
    {
        int path_length = 1;
        int max_path = 1;
        int max1 = 0;
        int max2 = 0;
        for(int neighbour : graph[node])
        {
            if(s[neighbour] == s[node])
            {
                vector<int> values = maxPath(graph,s,neighbour);
                max_path = max(max_path,values[1]);
            }
            else
            {
                vector<int> values = maxPath(graph,s,neighbour);
                if(values[0]>= max1)
                {
                    max2 = max1;
                    max1 = values[0];
                }
                else if(values[0] > max2)
                {
                    max2 = values[0];
                }
                max_path = max(max_path,values[1]);
            }
        }
        vector<int> result;
        max_path = max(max_path,max1 + max2 + 1);
        path_length = max1 + 1;
        result.push_back(path_length);
        result.push_back(max_path);
        return result;
    }
public:
    int longestPath(vector<int>& parent, string s) {
        vector<int> path(parent.size(),-1);
        vector<vector<int>> graph(parent.size(),vector<int>());
        for(int i =1; i < parent.size();i++)
        {
            graph[parent[i]].push_back(i);
        }
        vector<int> result = maxPath(graph,s,0);
        return result[1];
    }
};

int main(){
    vector<int> root{-1,0,0,0};
    string s = "aabc";

    Solution solObject;
    cout << solObject.longestPath(root, s) << endl;


    return 0;
}