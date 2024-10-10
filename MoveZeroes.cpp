#include<iostream>
using namespace std;
int main() {
    int arr[]={2,0,1,3,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // FIRST APPROACH
    
    /*int s = 0;
    int e = n-1;
    while(s<e){
        if((arr[s]==0) && (arr[e]==0)){
            e--;
        }
        else if((arr[s]==0) && (arr[e]!=0)){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else{
            s++;
        }
    }*/

    // SECOND APPROACH

    int k=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[k],arr[j]);
            k++;
        }
    }

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}