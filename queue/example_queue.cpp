#include <bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
int main() {
    int d = 4;
    int arr[] = {5,6,8,1,2,3,4,7,9,10};
    priority_queue<int>PQ;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        PQ.push(arr[i]);
    }
    int count=0;
    
    while(!PQ.empty()){
        int size = sizeof(arr)/sizeof(arr[0])-PQ.size(); 
        int x = PQ.top();
        PQ.pop();
        if(x>d){
            int rem = x-d;
        PQ.push(rem);
           
        }
        if(size!=0){
            count++;
            cout<<"Task "<<count<<" completed!"<<endl;
        }
    }
    cout<<"Task "<<n<<" completed!"<<endl;
    return 0;
}