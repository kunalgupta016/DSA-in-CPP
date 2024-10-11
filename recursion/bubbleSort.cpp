#include <iostream>
using namespace std;

void Sort(int *arr ,int n){
    if(n==0 || n==1)
        return ;
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Sort(arr,n-1);
}

int main() {
    int arr[5]={2,5,6,73,4};
    Sort(arr,5);
    for(int i= 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}