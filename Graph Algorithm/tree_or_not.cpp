/*
    Check if a graph is a tree or not ; 
    2 conditions:
        i)  Graph mustn't contain cycle;
        ii) All nodes must be connected;
*/

#include<iostream>
#include<queue>
using namespace std;

class Graph{

    private:
        bool ** adj;
        int V,E;
    
    public:

        bool check_tree(){
            
            bool * visited = new bool [V];

            for(int i = 0 ; i < V ; ++i){
                visited[i] = false;
            }

            queue<int> node , par;
            
            node.push(0);
            par.push(-1);

            while(!node.empty()){

                int curr = node.front();
                node.pop();
                int cpar = par.front();
                par.pop();
                visited[curr] = true;

                for(int i = 0 ; i < V ; ++i){
                    
                    if(adj[curr][i]){

                        if(visited[i] == false ){
                            node.push(i);
                            par.push(curr);
                        }
                        else{
                            if(i != cpar){
                                delete []visited;
                                return false;
                            }
                        }

                    }

                }


            }

            for(int i = 0 ; i < V ; ++i){
                if(visited[i] == false){
                    delete []visited;
                    return false;
                }
            }

            delete []visited;

            return true;

        }

        void add_edge(int v1 , int v2){
            adj[v1][v2] = true;
            adj[v2][v1] = true;
        }

        Graph(int v , int e):V(v),E(e){
            adj = new bool * [V];
            for(int i = 0 ; i < V ; ++i){
                adj[i] = new bool[V];
                for(int j = 0 ; j < V ; ++j){
                    adj[i][j] = false;
                }
            }
            
        }

        ~Graph(){

            for(int i = 0 ; i < V ; ++i){
                delete []adj[i];
            }

            delete []adj;
        }

};

int main(){

    int v,e;
    cout<<"Enter no of vertices and edges: ";
    cin>>v>>e;

    Graph g1(v,e);

    cout<<"Enter edges: ";
    for(int i = 0 ; i < e ; ++i){
        int v1 , v2;
        cin>>v1>>v2;
        g1.add_edge(v1,v2);
    }

    if(g1.check_tree()){
        cout<<"It is tree";
    }
    else{
        cout<<"It is not tree.";
    }


    return 0;
}