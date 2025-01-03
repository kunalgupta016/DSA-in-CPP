#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;
    void addEdge(int u, int v, int weight)
    {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);
    }

    void printadj()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << "),";
            }
            cout << endl;
        }
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = true;
        for (auto i : adj[node])
        {
            if (!visited[i.first])
            {
                dfs(i.first, visited, s);
            }
        }
        s.push(node);
    }

    void getSortestPath(int src, vector<int> &dist, stack<int> &s)
    {
        dist[src] = 0;
        while (!s.empty())
        {
            int top = s.top();
            s.pop();
            if(dist[top]!=INT_MAX){
                for (auto neighbour : adj[top])
            {
                if (dist[top] + neighbour.second < dist[neighbour.first])
                {
                    dist[neighbour.first] = dist[top] + neighbour.second;
                }
            }
            }
            
        }
    }
};

int main()
{

    Graph g;
    g.addEdge(0, 1, 1);
    g.addEdge(0, 5, 2);
    g.addEdge(1, 2, 6);
    g.addEdge(1, 4, 4);
    g.addEdge(1, 5, 3);
    g.addEdge(2, 3, 7);
    g.addEdge(4, 3, 8);
    g.addEdge(5, 4, 5);
    g.printadj();

    unordered_map<int, bool> visited;
    stack<int> s;

    int n = 6;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited, s);
        }
    }

    int src = 0;
    vector<int> dist(n);
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    g.getSortestPath(src, dist, s);
    cout << "Shortest path from " << src << " is " << endl;
    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}