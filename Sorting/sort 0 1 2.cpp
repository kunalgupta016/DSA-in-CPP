//  DUTCH NATIONAL FLAG ALGORITHM

#include<iostream>
using namespace std;
int main(){ 
	int arr[5]={1,1,0,2,1};
	int n=sizeof(arr)/4;
	int low=0,mid=0,high=n-1;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[low],arr[mid]);
			low++;
			mid++;
		}
		else if (arr[mid]==1){
			mid++;
		}
		else{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
