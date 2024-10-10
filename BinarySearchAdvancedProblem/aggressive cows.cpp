#include<iostream>
using namespace std;

bool isPossible(int arr[] , int k , int mid){
	int cowCount = 1;
	int lastPosition = arr[0];
	for(int i=0 ; i<=sizeof(arr)/4 ; i++){
		if(arr[i]-lastPosition >= mid){
			cowCount++;
			if(cowCount==k){
				return true;
			}
			lastPosition=arr[i];
		}
		
	}
	return false;
}

int main(){
	int stalls[]={4,2,1,3,6};
	int cow = 2;
	int size=sizeof(stalls)/4;
	for(int i=0;i<size;i++){
		for(int j = i+1 ;j<size;j++){
			if(stalls[j]<stalls[i]){
				int temp;
				temp=stalls[i];
				stalls[i]=stalls[j];
				stalls[j]=temp;
			}
		}
	}
	

	int s = 0 ;
	int maxi = -1 ;
	for(int i= 0 ;i<size ;i++){
		maxi = max(maxi , stalls[i]);
	}
	int e = maxi ;
	int ans = -1;
	int mid = s + (e-s)/2;
	while(s<=e){
		if(isPossible(stalls , cow , mid)){
			ans = mid ;
			s = mid + 1;
		} 
		else{
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	}
	cout<<ans;
}
