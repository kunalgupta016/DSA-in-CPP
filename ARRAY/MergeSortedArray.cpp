#include <iostream>
using namespace std;

void merge(int arr1[],int n , int arr2[],int m , int arr3[] ){

    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }  
    }
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }


}

void print(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}

int main() {
    int arr1[]={1,2,3,6,7};
    int arr2[]={4,5,9};
    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);

    return 0;
}