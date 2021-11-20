#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> graph, int i, bool *visited) {
    visited[i] = true;
    cerr << i << "->";
    for (int j = 0; j < graph[i].size(); j++) {
        if (!visited[graph[i][j]]) {
            dfs(graph, graph[i][j], visited);
        }
    }
}

void dfs(vector<vector<int>> graph) {
    bool visited[graph.size()] = {false};
    for (int i = 0; i < graph.size(); i++) {
        if (!visited[i]) {
            cerr << "*";
            dfs(graph, i, visited);
        }
    }
}

int main() {
    int v; // no of vertices
    int e; // no of edges
    cout << "no of edges: ";
    cin >> e;
    cout << "no of vertices: ";
    cin >> v;

    vector<vector<int>> graph(v); // make a graph to store v vertices

    // now insert edges in int
    cout << "enter the edges now in form (source, destination)::\n";
    for (int i = 0; i < e; i++) {
        int source, destination;
        cin >> source >> destination;
        graph[source].push_back(destination); // insert the edge
    }

    dfs(graph);

    return 0;
}
