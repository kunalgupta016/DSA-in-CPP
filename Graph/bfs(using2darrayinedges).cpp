#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void preparelist(unordered_map<int, list<int>> &adjList, vector<vector<int>> edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0]; // First node of the edge
        int v = edges[i][1]; // Second node of the edge

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty())
    {
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);

        // Traverse its neighbours
        for (auto i : adjList[frontnode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> res(int vertex, vector<vector<int>> edges)
{
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    preparelist(adjList, edges);

    // Traverse all components of the graph
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            bfs(adjList, visited, ans, i);
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
