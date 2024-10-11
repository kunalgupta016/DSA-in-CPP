#include<iostream>
using namespace std;
int main(){
	// conditions is that the array are sorted in non-descending order
	int arr[]={1,2,2,3,3,4};
	int brr[]={2,2,3};
	int n=sizeof(arr)/sizeof(int);
	int m=sizeof(brr)/sizeof(int);
//	FIRST CODE 
	
	for(int i = 0 ;i<n; i++){
		int element = arr[i];
		for(int j= 0;j<m;j++){
			if(element == brr[j]){
				cout<<element;
				brr[j]=-1;
				break;
			}
		}
	}
	
// SECOND APPROACH

/*
		for(int i = 0 ;i<n; i++){
		int element = arr[i];
		for(int j= 0;j<m;j++){
			if(element == brr[j]){
				cout<<element;
			break;	
			}
			
		}
	}
	
	*/
	
// THIRD APPROACH
//	int i=0,j=0;
//	while(i<n && j<m){
//		if(arr[i]==brr[j]){
//			cout<<arr[i];
//			i++;
//			j++;
//		}
//		else if(arr[i]<brr[j]){
//			i++;
//		}
//		else if(arr[i]>brr[j]) {
//			j++;
//		}
//	}
	
}
