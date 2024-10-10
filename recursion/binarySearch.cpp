#include <iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool BinarySearch(int arr[],int s,int e,int key){
    print(arr,s,e);

    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;

    cout<<"Mid is :"<<arr[mid]<<endl;
    cout<<"Key is :"<<key<<endl;

    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]>key){
        return BinarySearch(arr,s,mid-1,key);
    }
    else{
        return BinarySearch(arr,mid+1,e,key);
    }

}


int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int key = 5;
    int s = 0;
    int e = n-1;
    cout<<BinarySearch(arr,s,e,key)<<endl;
    return 0;
}