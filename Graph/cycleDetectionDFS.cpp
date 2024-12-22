#include <iostream>
#include <unordered_map>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
#include<queue>
using namespace std;

void prepareList(unordered_map<int,list<int>> &adjlist,vector<vector<int>> edges){
    int n = edges.size();
    for(int i = 0 ; i<n ;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
}


bool isCyclic(int node,unordered_map<int,bool>&visited,int parent,unordered_map<int,list<int>> &adjlist){
    visited[node] = true;
    for(auto neighbour:adjlist[node]){
        if(!visited[neighbour]){
            bool cycled = isCyclic(neighbour , visited,node,adjlist);
            if(cycled){
                return true;
            }
        }
        else if(neighbour!=parent){
            return true;
        }
    }
    return false;    
}


bool res(int vertex , vector<vector<int>> edges){
    unordered_map<int,list<int>> adjlist;
    prepareList(adjlist,edges);
    unordered_map<int,bool> visited;
    for(int i= 1; i<=vertex ; i++){
        if(!visited[i]){
            if(isCyclic(i,visited,-1,adjlist)){
                return true;
            }
        }
    }
    return false;
}







int main() {
    
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

    bool ans = res(vertex,edges);
    if(ans){
        cout<<"Graph Contains Cycle"<<endl;
    }
    else{
        cout<<"Graph doesn't contain Cycle"<<endl;
    }


    return 0;
}