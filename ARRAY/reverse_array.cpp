#include<iostream>
using namespace std;



void reverseArray(int arr[], int n){
	int start=0;
	int end=n-1;
	while(start<=end){
	//  swapping 
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
}


void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}


int main(){
	int arr[5]={1,2,3,4,5};
	int brr[4]={1,2,3,4};
//  Reverse array 	
	reverseArray(arr,5);
	reverseArray(brr,4);
	
//  print array
	
	PrintArray(arr,5);
	PrintArray(brr,4);
	
}
