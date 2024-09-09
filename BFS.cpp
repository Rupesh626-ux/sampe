#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS traversal starting from a given source node
void BFS(int start, const vector<vector<int>>& adjList, vector<bool>& visited) {
    queue<int> q; // Queue for BFS
    q.push(start); // Start from the given node
    visited[start] = true; // Mark the start node as visited

    while (!q.empty()) {
        int node = q.front(); // Get the front element in the queue
        q.pop();
        cout << node << " "; // Print the current node

        // Traverse all adjacent nodes
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) { // If the neighbor hasn't been visited
                visited[neighbor] = true;
                q.push(neighbor); // Add it to the queue for processing
            }
        }
    }
}

int main() {
    int n = 5; // Number of nodes
    vector<vector<int>> adjList(n); // Adjacency list for the graph

    // Sample graph edges
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0};
    adjList[3] = {1};
    adjList[4] = {1};

    vector<bool> visited(n, false); // Initialize all nodes as unvisited

    // Perform BFS starting from node 0
    BFS(0, adjList, visited);

    return 0;
}


