#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u,int v,bool direction){
        //direction -> directed = 1;
        //direction -> undirected = 0;

        //created an edge from u to v
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printAdjlist(){
        for(auto i : adj){
            cout<< i.first << "->";
            for(auto j : i.second){
                cout<< j << ", ";
            }
            cout<<endl;
        }
    }

};

int main(){
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    int m;
    cout<<"Enter the number of edges: ";
    cin>>m;

    Graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjlist();
}