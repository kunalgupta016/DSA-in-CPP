#include <iostream>
using namespace std;

bool linearSearch(int arr[],int n,int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        return linearSearch(arr+1,n-1,k);
    }
}

int main() {
    int arr[]={12,34,1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int ans = linearSearch(arr,n,key);
    if(ans){
        cout<<"Bhai hai isme"<<endl;
    }
    else{
        cout<<"afsos nahi hai "<<endl;
    }
    return 0;
}