#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <queue>
using namespace std;

void prepareList( unordered_map<int, list<int>> &adjlist , vector<vector<int>> &edges){
    int n = edges.size();
    for(int i =0 ; i<n;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}

vector<int> ShortestPath(int vertex ,vector<vector<int>> edges,int src , int dest ){
    unordered_map<int,list<int>> adjlist;
    prepareList(adjlist,edges);
    unordered_map<int,bool> visited;
    vector<int> parent(vertex+1,0);
    queue<int>q;
    q.push(src);
    parent[src] = -1;
    visited[src] = true;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(auto it : adjlist[front]){
            if(!visited[it]){
                q.push(it);
                visited[it] = true;
                parent[it] = front;
            }
        }
    }

    // prepare shortest path
    vector<int> ans;
    int crrnode = dest;
    ans.push_back(dest);
    while(crrnode!=src){
        crrnode = parent[crrnode];
        ans.push_back(crrnode);
    }

    reverse(ans.begin(),ans.end());
    return ans;

}

int main() {
    vector<vector<int>> edges;
    edges.push_back({1,2});
    edges.push_back({1,3});
    edges.push_back({1,4});
    edges.push_back({3,8});
    edges.push_back({2,5});
    edges.push_back({4,6});
    edges.push_back({5,8});
    edges.push_back({6,7});
    edges.push_back({7,8});

    int vertex = 8;
    int src = 1;
    int dest = 8;

    vector<int> ans = ShortestPath(vertex,edges,src,dest);
    int n = ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}