#include<iostream>
using namespace std;


void reverseAlternate(int arr[],int n){
	for(int i=0;i<n;i=i+2){
		if(i+1<n){
			swap(arr[i],arr[i+1]);
		}	
    }
}


void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}


int main(){
	int arr[6]={1,2,3,4,5,6};
	reverseAlternate(arr,6);
	printArray(arr,6);
}
