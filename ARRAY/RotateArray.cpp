#include <iostream>
using namespace std;

void rotate(int arr[],int n,int k){
int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}


int main() {

    int arr[]={11,12,13,14,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    rotate(arr,n,k);
    return 0;
}
