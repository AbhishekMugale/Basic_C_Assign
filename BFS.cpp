#include <iostream>
#include <vector>
#include <queue>
#include <omp.h>

using namespace std;

// Define a structure to represent a graph node
struct Node {
    int id;
    vector<int> neighbors;
};

// Perform Parallel Breadth First Search on the graph
void parallelBFS(vector<Node>& graph, int startNode) {
    queue<int> q;
    vector<bool> visited(graph.size(), false);
    int depth = 0;

    // Push the starting node onto the queue and mark it as visited
    q.push(startNode);
    visited[startNode] = true;

    while (!q.empty()) {
        int size = q.size();

        // Parallelize the exploration of nodes at the current depth
        #pragma omp parallel for
        for (int i = 0; i < size; ++i) {
            int node_id;
            #pragma omp critical
            {
                node_id = q.front();
                q.pop();
            }

            // Process the current node
            cout << "Node " << node_id << " at depth " << depth << endl;

            // Explore neighbors of the current node
            for (int neighbor : graph[node_id].neighbors) {
                if (!visited[neighbor]) {
                    #pragma omp critical
                    {
                        q.push(neighbor);
                        visited[neighbor] = true;
                    }
                }
            }
        }

        depth++;
    }
}

int main() {
    // Construct the graph
    int numNodes = 6;
    vector<Node> graph(numNodes);
    graph[0].neighbors = {1, 2};
    graph[1].neighbors = {0, 3, 4};
    graph[2].neighbors = {0, 5};
    graph[3].neighbors = {1};
    graph[4].neighbors = {1};
    graph[5].neighbors = {2};

    // Perform parallel BFS starting from node 0
    parallelBFS(graph, 0);

    return 0;
}
