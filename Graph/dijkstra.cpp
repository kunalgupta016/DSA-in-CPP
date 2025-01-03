#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;
    void addedge(int u , int v , int weight){
        pair<int,int> p = make_pair(v,weight);
        pair<int,int> q = make_pair(u,weight);
        adj[u].push_back(p);
        adj[v].push_back(q);
    }

    void printAdj(){
        for(auto i : adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<"),";
            }cout<<endl;
        }
    }

    void dijkstra(int src , set<pair<int,int>>&st,vector<int>&dist){
        dist[src] = 0;
        st.insert(make_pair(0,src));
        while(!st.empty()){
            auto top = *(st.begin());
            int nodeDistance = top.first;
            int topNode = top.second;

            st.erase(st.begin());

            for(auto neighbour : adj[topNode]){
                if(nodeDistance+neighbour.second<dist[neighbour.first]){
                    auto record = st.find(make_pair(dist[neighbour.first] , neighbour.first));

                    if(record !=st.end()){
                        st.erase(record);
                    }

                    dist[neighbour.first]=nodeDistance+neighbour.second;
                    st.insert(make_pair(dist[neighbour.first],neighbour.first));
                }
            }
        }
    }
    

        


};

int main() {
    
    Graph g;
    g.addedge(0,1,5);
    g.addedge(0,2,8);
    g.addedge(1,2,9);
    g.addedge(1,3,2);
    g.addedge(2,3,6);
    g.printAdj();

    int n  = 4;
    vector<int> dist(n);
    for(int i = 0; i<n;i++){
        dist[i] = INT_MAX;
    }
    set<pair<int,int>> st;
    g.dijkstra(0,st,dist);
    cout<<"Shortest distance from node 0 to all other nodes is "<<endl;
    for(int i = 0; i<n;i++){
        cout<<dist[i]<<" ";
    }cout<<endl;


    return 0;
}