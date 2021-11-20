#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>> graph, int start, bool *visited) {
    list<int> queue;

    // make current node visited
    visited[start] = true;
    queue.push_back(start);

    while (!queue.empty()) {
        start = queue.front();
        cout << start << "->";
        queue.pop_front();

        // get all the adjacent enqueued
        for (int i = 0; i < graph[start].size(); i++) {
            if (!visited[graph[start][i]]) {
                visited[graph[start][i]] = true;
                queue.push_back(graph[start][i]);
            }
        }
    }
}

void bfs(vector<vector<int>> graph) {
    bool visited[graph.size()] = {false};
    for (int i = 0; i < graph.size(); i++) {
        if (!visited[i]) {
            cerr << "*";
            bfs(graph, i, visited);
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

    bfs(graph);

    return 0;
}
