#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void preparelist(unordered_map<int, list<int>> &adjlist,
                 vector<vector<int>> edges)
{
    int n = edges.size();
    for (int i = 0; i < n; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}

void dfs(int node, unordered_map<int, list<int>> &adjlist,
         unordered_map<int, bool> &visited, vector<int> &ans)
{

    ans.push_back(node);
    visited[node] = true;
    for (auto i : adjlist[node])
    {
        if (!visited[i])
        {
            dfs(i, adjlist, visited, ans);
        }
    }
}

vector<int> res(int vertex, vector<vector<int>> edges)
{
    unordered_map<int, bool> visited;
    vector<int> ans;
    unordered_map<int, list<int>> adjlist;
    preparelist(adjlist, edges);

    // traverse components
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            // vector<int> comp;
            dfs(i, adjlist, visited, ans);
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> edges;
    edges.push_back({0, 2});
    edges.push_back({2, 1});
    edges.push_back({1, 3});
    edges.push_back({3, 4});
    edges.push_back({2, 4});

    int vertex = 5;
    vector<int> ans = res(vertex, edges);
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}