#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <queue>
using namespace std;

void preparelist( unordered_map<int, list<int>> &adjlist ,vector<vector<int>> &edges){
    int n = edges.size();
    for(int i = 0; i<n;i++){
        int u = edges[i][0];
        int v = edges[i][1];    

        adjlist[u].push_back(v);
    }
}

// void prepareIndegree(vector<int> &indegree ,  unordered_map<int, list<int>> &adjlist){
//     for(auto i:adjlist){
//         for(auto j:i.second){
//             indegree[j]++;
//         }
//     }
// }


vector<int> topologicalSort(int vertex , vector<vector<int>> edges){
    unordered_map<int ,list<int>> adjlist;
    preparelist(adjlist,edges);
    queue<int> q;
    vector<int> indegree(vertex+1,0);
    // prepareIndegree(indegree,adjlist);
    for(auto i:adjlist){
        for(auto j:i.second){
            indegree[j]++;
        }
    }
    // 0 valo ko push
    for(int i=1;i<=vertex;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    // do bfs
    vector<int> ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for(auto i:adjlist[front]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
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