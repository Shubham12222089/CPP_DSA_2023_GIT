// #include <iostream>
// #include <vector>
// #include <list>
// #include <stack>

// using namespace std;

// class Graph {
// public:
//     int V; // Number of vertices
//     vector<list<int>> adj;

//     Graph(int vertices) : V(vertices), adj(vertices) {}

//     void addEdge(int u, int v) {
//         adj[u].push_back(v);
//     }

//     void DFS(int start) {
//         vector<bool> visited(V, false);
//         stack<int> stack;

//         visited[start] = true;
//         stack.push(start);

//         while (!stack.empty()) {
//             int current = stack.top();
//             cout << current << " ";
//             stack.pop();

//             for (int neighbor : adj[current]) {
//                 if (!visited[neighbor]) {
//                     visited[neighbor] = true;
//                     stack.push(neighbor);
//                 }
//             }
//         }
//     }
// };

// int main() {
//     int numVertices, numEdges;
//     cout << "Enter the number of vertices: ";
//     cin >> numVertices;
//     cout << "Enter the number of edges: ";
//     cin >> numEdges;

//     Graph g(numVertices);

//     cout << "Enter the edges (format: u v):" << endl;
//     for (int i = 0; i < numEdges; i++) {
//         int u, v;
//         cin >> u >> v;
//         g.addEdge(u, v);
//     }

//     int startNode;
//     cout << "Enter the starting node for DFS: ";
//     cin >> startNode;

//     cout << "DFS starting from node " << startNode << ": ";
//     g.DFS(startNode);

//     return 0;
// }

//-------2nd method using stack


#include<iostream>
#include<stack>
#include<unordered_map>
#include<vector>
using namespace std;

class graph{
    public:
    unordered_map<int,vector<int>> adj;

    void addedge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void dfs(int start){
        unordered_map<int,bool> visited;
        stack<int> s;

        visited[start]=true;
        s.push(start);

        while(!s.empty()){
            int current = s.top();
            cout<<current<<" ";
            s.pop();

            for(auto i : adj[current]){
                if(!visited[i]){
                    visited[i]=true;
                    s.push(i);
                }
            }
        }


    }
};


int main(){
    int n;
    cout<<"Enter the no. of nodes: ";
    cin>>n;
    int m;
    cout<<"Enter the no. of edges: ";
    cin>>m;

    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v);
    }
    int node;
    // cout<<"Enter the starting node : ";
    // cin>>node;
    g.dfs(0);
}
