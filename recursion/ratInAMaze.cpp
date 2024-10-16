#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool isSafe(int x, int y , vector<vector<int>> m ,int n,vector<vector<int>> visited ){
    if((x>=0 && x<n) && (y>=0 && y<n) && (m[x][y]==1) &&(visited[x][y]==0)){
        return true;
    }
    else{
        return false;
    }
}


void solve(vector<vector<int>>&m,int n ,vector<string>&ans , string path , int x , int y , vector<vector<int>> visited ){
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    // 4 choices
    // down 
    int newx = x+1;
    int newy = y;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('D');
        solve(m,n,ans,path,newx,newy,visited);
        path.pop_back();
    }
    // up 
    newx = x-1;
    newy = y;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('U');
        solve(m,n,ans,path,newx,newy,visited);
        path.pop_back();
    }
    // left 
    newx = x;
    newy = y-1;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('L');
        solve(m,n,ans,path,newx,newy,visited);
        path.pop_back();
    }
    // right 
    newx = x;
    newy = y+1;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('R');
        solve(m,n,ans,path,newx,newy,visited);
        path.pop_back();
    }

}

int main() {

    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0,1,1,1}
    };
    
    vector<string> ans;
    int n = 4;
    
    int srcx = 0;
    int srcy = 0;

    vector<vector<int>> visited = m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
        }
    }
    string path = "";
    solve(m,n,ans,path,srcx,srcy,visited);
    sort(ans.begin(),ans.end());

    int l = ans.size();
    for(int i = 0; i<l;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
