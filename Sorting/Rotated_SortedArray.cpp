#include <iostream>
using namespace std;
int main() {
    int arr[]={3,4,5,1,2};
    int count=0;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }

    bool ans;
    if(count<=1){
        ans = true;
    }

    cout<<" Array is Rotated and Sorted "<<ans<<"\n";
    return 0;
}