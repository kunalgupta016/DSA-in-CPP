#include <iostream>
#include <unordered_map>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
#include<queue>
using namespace std;


void preparelist( unordered_map<int, list<int>> &adjlist , vector<vector<int>> &edges){
    int n = edges.size();
    for(int i = 0 ; i<n ;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjlist[u].push_back(v);
    }
}

bool checkDFScycle(int node , unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsvisited, unordered_map<int, list<int>> &adjlist){
    visited[node] = true;
    dfsvisited[node] = true;
    for(auto i:adjlist[node]){
        if(!visited[i]){
            bool cycleDetected = checkDFScycle( i , visited , dfsvisited, adjlist );
            if(cycleDetected){
                return true;
            }
        }
        else if(dfsvisited[i]){
            return true;
        }
    }
    dfsvisited[node] = false;
    return false;
}

bool res(int vertex , vector<vector<int>> edges) {
    unordered_map<int, list<int>> adjlist;
    preparelist(adjlist,edges);
    unordered_map<int,bool> visited;
    unordered_map<int,bool> dfsvisited;
    for(int i = 1 ; i<=vertex ;i++){
        if(!visited[i]){
            bool cycleFound = checkDFScycle( i , visited , dfsvisited , adjlist);
            if(cycleFound){
                return true;
            }
        }
    }
    return false;
}



int main() {
    
    vector<vector<int>> edges;
    edges.push_back({1,2});
    edges.push_back({2,3});
    edges.push_back({2,4});
    edges.push_back({4,5});
    edges.push_back({5,6});
    edges.push_back({6,4}); 
    edges.push_back({3,7});
    edges.push_back({3,8});
    edges.push_back({8,7});

    int vertex = 8;
    bool ans = res(vertex , edges);
    if(ans){
        cout<<"Graph contains cycle"<<endl;
    }
    else{
        cout<<"Graph doesn't contains cycle"<<endl;
    }



    return 0;
}