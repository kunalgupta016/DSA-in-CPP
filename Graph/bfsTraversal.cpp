#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void preparelist(unordered_map<int,list<int>> &adjList , vector<pair<int,int>> edges){
    for(int i = 0 ;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}


void bfs(unordered_map<int,list<int>> &adjList , unordered_map<int,bool> &visited ,vector<int> &ans , int node){

    queue<int> q;
    q.push(node);
    visited[node] = true;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);

        // traverse its neighbours
        for(auto i:adjList[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}


vector<int> res(int vertex , vector<pair<int,int>> edges){
    unordered_map<int , list<int>> adjList;
    vector<int> ans;
    unordered_map<int,bool> visited;

    preparelist(adjList,edges);

    // traverse all components of graph
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adjList , visited , ans, i);
        }
    }

    return ans;

}

int main() {

    vector<pair<int,int>> edges;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,1));
    edges.push_back(make_pair(1,2));
    edges.push_back(make_pair(1,4));

    int vertex;

    vector<int> ans = res(vertex , edges);
    int n = sizeof(ans)/4;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}