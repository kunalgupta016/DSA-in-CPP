#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void summ(int arr1[],int n,int arr2[],int m){

    int i=n-1;
    int j = m-1;
    int carry = 0; 
    int size = max(n,m);
    int p[size];
    int k=0;
    int sum = 0;
    while(i>=0 && j>=0){
        int val1 = arr1[i];
        int val2 = arr2[j];
        sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;

        p[k]=sum;
        k++;
        i--;
        j--;
    }

    while(i>=0){

        sum = arr1[i]+carry;
        carry = sum/10;
        sum = sum%10;
        p[k]=sum;
        k++;
        i--;
    }

    while(j>=0){
        sum = arr2[j]+carry;
        carry = sum/10;
        sum = sum%10;
        p[k]=sum;
        k++;
        j--;
    }
    while(carry!=0){
        sum = carry;
        carry = sum/10;
        sum = sum%10;
        p[k]=sum;
        k++;
    }

//    for(int i=0;i<size;i++){
//     cout<<p[i]<<" ";
//    }

   reverse(p,size);


}





int main() {

    int arr1[]={1,2,3};
    int arr2[]={4,5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    summ(arr1,n,arr2,m);
   


    return 0;
}