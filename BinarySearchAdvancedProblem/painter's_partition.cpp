#include<iostream>
using namespace std;
bool isPossible(int arr[] , int n , int mid ,int k ){
	int painterCount = 1 ;
	int boardSum = 0 ;
	for(int i = 0 ; i < n ;i++){
		if(boardSum + arr[i] <= mid ){
			boardSum=boardSum+arr[i];
		}
		else{
			painterCount++;
			if(arr[i]>mid || painterCount>k){
				return false;
			}
			boardSum = arr[i];
		}
	}
	return true;
}





int main(){
	int arr[]={5,5,5,5};
	int k=2;
	int n = sizeof(arr)/sizeof(int);
	int s = 0 , sum = 0 ;
	for(int i = 0; i<n ; i++){
		sum+=arr[i];
	}
	int e = sum;
	int ans = -1 ;
	int mid = s + (e-s)/2;
	while(s<e){
		if(isPossible(arr,n,mid,k)){
			ans = mid ;
			e = mid - 1 ;
		}
		else{
			s = mid + 1 ;
		}
		mid = s + (e-s)/2;
		
	}
	cout<<ans;
}
