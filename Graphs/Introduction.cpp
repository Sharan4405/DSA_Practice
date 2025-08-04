#include<bits/stdc++.h>
using namespace std;
class Graph{

public:
   vector<vector<int>> adj;
   // constructor to initialize adj with 'n' nodes
    Graph(int n) {
        adj.resize(n);
    }
   void addEdge(int u,int v,bool direction){
    //direction - 0 -> undirected
    //direction - 1 -> directed
    //creating an edge between u and v
    adj[u].push_back(v);
    if(direction) adj[v].push_back(u);
   }

   void printAdjList(){
    for(int x=0;x<adj.size();x++){
        cout << x << "->";
        for(auto y:adj[x]){
            cout << y << " ";
        }
        cout << "\n";
    }
   }
};
int main(){
    int n;
    cout << "enter no of nodes" << endl;
    cin >> n;
    int m;
    cout << "enter no of edges" << endl;
    cin >> m;
    Graph g = Graph(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    return 0;
}
//Theory - 
//Graph is a data Structure which consists of node an entity and edges for connecting those entities.
//Directed and undirected graph ,weighted and unweighted graph ,cyclic and acyclic graphs ,degree of the node in nothing but to how much nodes it is connected with through edges in undirected 
//for Directed graphs ,out and in degree , out degree refers to number of connections from that node to other nodes , in degree refers to no of edges coming to that node from other nodes.
