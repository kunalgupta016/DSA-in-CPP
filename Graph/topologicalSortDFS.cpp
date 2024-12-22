#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <stack>
using namespace std;

void prepareList( unordered_map<int, list<int>> &adjlist , vector<vector<int>> &edges){
    int n = edges.size();
    for(int i =0 ; i<n;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].push_back(v);
    }
}

void topoSort(int node , unordered_map<int,bool> &visited , stack<int>&s ,  unordered_map<int, list<int>> &adjlist){
    visited[node] = true;
    for(auto i:adjlist[node]){
        if(!visited[i]){
            topoSort(i ,visited,s,adjlist );
        }
    }
    s.push(node);
}

vector<int> topologicalSort(int vertex , vector<vector<int>> edges){
    unordered_map<int,list<int>> adjlist;
    prepareList(adjlist , edges);
    unordered_map<int,bool> visited;
    stack<int> s;
    for(int i = 1; i <=vertex; i++){
        if(!visited[i]){
            topoSort(i,visited,s,adjlist);
        }
    }

    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}


int main() {

    vector<vector<int>> edges;
    edges.push_back({1,2});
    edges.push_back({1,3});
    edges.push_back({2,4});
    edges.push_back({3,4});
    edges.push_back({4,5});
    edges.push_back({4,6});
    edges.push_back({5,6});

    int vertex = 6;

    vector<int> ans = topologicalSort(vertex,edges);
    int n = ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}