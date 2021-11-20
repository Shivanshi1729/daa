#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int vertex;
    int weight;
    node *next;

    node() {
        vertex = 0;
        weight = 0;
        next = NULL;
    }

    node(int vertex, int weight) {
        this->vertex = vertex;
        this->weight = weight;
    }
};

class Graph {
public:
    int vertices;  // no of vertices
    int edges;     // no of edges
    node *adjList; // for each vertice a list

    Graph() {
        vertices = 0;
        edges = 0;
    }

    /* graph(n) - make a graph with n vertices */
    Graph(int n) {
        vertices = n;
        edges = 0;
        adjList = new node[10];
    }

    /* addEdge(source, destination, weight) */
    bool addEdge(int source, int destination, int weight) {
    }
};

int main() {
    return 0;
}