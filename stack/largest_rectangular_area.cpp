#include <iostream>
#include<stack>
#include <bits/stdc++.h>
using namespace std;

vector<int> nextElement(int *arr , int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i =n-1 ; i>=0 ; i--){
        int crr = arr[i];
        while(s.top()!=-1 &&   arr[s.top()]>=crr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i); 
    }
    return ans;
}


vector<int> preElement(int *arr , int n){
    stack<int>s;
    s.push(-1);
    vector<int> ans(n);
    for(int i =0; i<n ; i++){
        int crr = arr[i];
        while(s.top()!=-1 &&   arr[s.top()]>=crr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i); 
    }
    return ans;
}

int main() {
    
    int arr[] = {2,1,5,6,2,3};
    int n = 6;
    vector<int> next(n);
    next = nextElement(arr,n);
    vector<int> pre(n);
    int area = 0;
    pre = preElement(arr,n);
    for(int i = 0 ; i<n ;i++){
        int l = arr[i];
        if(next[i]==-1){
            next[i]=n;
        }
        int w = next[i]-pre[i]-1;
        int newArea = l*w;
        area = max(area,newArea);

    }
    cout<<area<<endl;


    return 0;
}