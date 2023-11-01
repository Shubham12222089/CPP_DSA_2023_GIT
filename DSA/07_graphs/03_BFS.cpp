// #include <iostream>
// #include <queue>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// class Graph {
// public:
//     unordered_map<int, vector<int>> adj;

//     void addEdge(int u, int v) {
//         adj[u].push_back(v);
//         adj[v].push_back(u); // For an undirected graph
//     }

//     void bfs(int start) {
//         unordered_map<int, bool> visited;
//         queue<int> q;

//         // Mark the starting node as visited and enqueue it
//         visited[start] = true;
//         q.push(start);

//         while (!q.empty()) {
//             int current = q.front();
//             cout << current << " ";
//             q.pop();

//             // Visit all adjacent nodes of the current node
//             for (int neighbor : adj[current]) {
//                 if (!visited[neighbor]) {
//                     visited[neighbor] = true;
//                     q.push(neighbor);
//                 }
//             }
//         }
//     }
// };

// int main() {
//     Graph g;
//     g.addEdge(0, 1);
//     g.addEdge(0, 2);
//     g.addEdge(1, 3);
//     g.addEdge(2, 4);
//     g.addEdge(2, 5);
//     g.addEdge(3, 5);
//     g.addEdge(4, 5);

//     cout << "BFS starting from node 0: ";
//     g.bfs(0);

//     return 0;
// }

#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

class graph {
public:
    unordered_map<int, vector<int>> adj;

    void addedge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void bfs(int start) {
        unordered_map<int, bool> visited;
        visited[start] = true;
        queue<int> q;
        q.push(start);

        while (!q.empty()) {
            int current = q.front();
            cout << current << " ";
            q.pop();

            for (int neighbour : adj[current]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
    }
};

int main() {
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;
    graph g;

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v);
    }

    cout << "BFS starting from node 0: ";
    g.bfs(0);
    
    return 0;
}
