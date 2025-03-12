#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(int start, vector<vector<int>>& adj, int n) {
    vector<int> result;
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int i : adj[node]) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    return result;
}

int main() {
    cout << "This is a BFS graph traversal algorithm" << endl;
    int n, E;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> E;

    
    vector<vector<int>> adj(n+1);

    cout << "Enter the edges (format: v w):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        //if graph is undirected then next line is to be comment 
        adj[v].push_back(u); 
    }

    int start;
    cout << "Enter the starting vertex for BFS: ";
    cin >> start;

    vector<int> result = bfs(start, adj, n);

    cout << "BFS Traversal: ";
    for (int i : result) {
        cout << i << " --> ";
    }
    cout << endl;

    return 0;
}
