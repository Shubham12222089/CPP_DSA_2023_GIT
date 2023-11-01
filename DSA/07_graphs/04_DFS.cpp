#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

class Graph {
public:
    int V; // Number of vertices
    vector<list<int>> adj;

    Graph(int vertices) : V(vertices), adj(vertices) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void DFS(int start) {
        vector<bool> visited(V, false);
        stack<int> stack;

        visited[start] = true;
        stack.push(start);

        while (!stack.empty()) {
            int current = stack.top();
            cout << current << " ";
            stack.pop();

            for (int neighbor : adj[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    stack.push(neighbor);
                }
            }
        }
    }
};

int main() {
    int numVertices, numEdges;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    Graph g(numVertices);

    cout << "Enter the edges (format: u v):" << endl;
    for (int i = 0; i < numEdges; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    int startNode;
    cout << "Enter the starting node for DFS: ";
    cin >> startNode;

    cout << "DFS starting from node " << startNode << ": ";
    g.DFS(startNode);

    return 0;
}
