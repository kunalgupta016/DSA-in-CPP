#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void prepareMatrix(vector<vector<int>> &adjMatrix, vector<vector<int>> edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0]; // First node of the edge
        int v = edges[i][1]; // Second node of the edge

        // Since it's an undirected graph, mark both adjacencies
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }
}

void bfs(vector<vector<int>> &adjMatrix, vector<bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty())
    {
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);

        // Traverse its neighbours using the adjacency matrix
        for (int i = 0; i < adjMatrix.size(); i++)
        {
            if (adjMatrix[frontnode][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> res(int vertex, vector<vector<int>> edges)
{
    // Create an adjacency matrix initialized to 0
    vector<vector<int>> adjMatrix(vertex, vector<int>(vertex, 0));
    vector<int> ans;
    vector<bool> visited(vertex, false);

    prepareMatrix(adjMatrix, edges);

    // Traverse all components of the graph
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            bfs(adjMatrix, visited, ans, i);
        }
    }

    return ans;
}

int main()
{
    // Define the edges as a vector of vectors (not pairs)
    vector<vector<int>> edges;
    edges.push_back({0, 3});
    edges.push_back({3, 1});
    edges.push_back({1, 2});
    edges.push_back({1, 4});

    int vertex = 5; // Total number of vertices (0 to 4)

    vector<int> ans = res(vertex, edges);
    int n = ans.size(); // Correct way to get the size of the vector
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
