#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <queue>
using namespace std;

void preparelist(unordered_map<int, list<int>> &adjList, vector<vector<int>> edges)
{
    int n = edges.size();
    for (int i = 0; i < n; i++)
    {
        int u = edges[i][0]; // First node of the edge
        int v = edges[i][1]; // Second node of the edge

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

bool isCyclic(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList)
{
    queue<int> q;
    unordered_map<int, int> parent;
    parent[node] = -1;
    q.push(node);
    visited[node] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (auto it : adjList[front])
        {
            if (visited[it] == true && it != parent[front])
            {
                return true;
            }
            else if (!visited[it])
            {
                q.push(it);
                visited[it] = true;
                parent[it] = front;
            }
        }
    }

    return false;
}

bool res(int vertex, vector<vector<int>> edges)
{
    unordered_map<int, list<int>> adjList;
    preparelist(adjList, edges);
    unordered_map<int, bool> visited;
    for (int i = 1; i <= vertex; i++)
    {
        if (!visited[i])
        {
            if (isCyclic(i, visited, adjList))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    vector<vector<int>> edges;
    edges.push_back({1, 2});
    edges.push_back({2, 3});
    edges.push_back({4, 5});
    edges.push_back({5, 6});
    edges.push_back({5, 7});
    edges.push_back({7, 8});
    edges.push_back({8, 6});
    edges.push_back({8, 9});

    int vertex = 9;

    bool ans = res(vertex, edges);
    if (ans)
    {
        cout << "Graph contains cycle" << endl;
    }
    else
    {
        cout << "Graph doesn't contain cycle" << endl;
    }

    return 0;
}