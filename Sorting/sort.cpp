#include<iostream>
using namespace std;
printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<"\n";
	
}

sortArray(int arr[],int n){
	int i=0,j=n-1;
	while(i<j){
		while(arr[i]==0 && i<j){
			i++;
		}
		while(arr[j]==1 && i<j){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}	
}


int main(){
	int arr[10]={1,0,1,0,1,1,1,0,1,0};
	sortArray(arr,10);
	printArray(arr,10);
}


