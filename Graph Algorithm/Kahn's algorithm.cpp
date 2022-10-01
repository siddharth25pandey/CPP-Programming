class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<set<int>> graphKahn = make_graph_Kahn(numCourses, prerequisites);
        return findOrder_Kahn(numCourses,prerequisites);
    }
    vector<int> findOrder_Kahn(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> L; //topological order
        stack<int> S; //set of node without incoming edge
        vector<set<int>> graphKahn = make_graph_Kahn(numCourses, prerequisites);
        for (int i = 0; i < graphKahn.size(); i++)
            if (graphKahn[i].empty()){
                L.push_back(i);
                S.push(i);
                //insert -1 to mark that the node is empty and already add to L
                graphKahn[i].insert(-1);
            }
        while (!S.empty()){
            int node = S.top();
            S.pop();
            // delete --edge from node to other node--
            for (int i = 0; i < graphKahn.size(); i++){
                graphKahn[i].erase(node);
                if (graphKahn[i].empty()){
                    L.push_back(i);
                    S.push(i);
                    //insert -1 to mark that the node is empty and already add to L
                    graphKahn[i].insert(-1);
                }
            }
        }
        for (auto node : graphKahn)
            if (*node.begin() != -1){
                vector<int> nu;
                return nu;}
        return L;
    }
    //make-graph-> node-edge 
    vector<set<int>> make_graph(int numCourses, vector<pair<int, int>>& prerequisites){
        vector<set<int>> graph(numCourses);
        for (auto pre : prerequisites)
            graph[pre.second].insert(pre.first);
        return graph;
    }
    //make-graph for Kahn's algorithm incomming edge for a node
    vector<set<int>> make_graph_Kahn(int numCourses, vector<pair<int, int>>& prerequisites){
        vector<set<int>> graph(numCourses);
        for (auto pre : prerequisites)
            graph[pre.first].insert(pre.second);
        return graph;
    }
    
};
