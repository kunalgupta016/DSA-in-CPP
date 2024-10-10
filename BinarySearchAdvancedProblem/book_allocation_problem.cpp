#include<iostream>
using namespace std;
bool isPossible(int arr[] , int n ,int m ,int mid){
	int studentCount=1;
	int pageSum = 0;
	for(int i=0 ; i<n ;i++){
		if(pageSum +arr[i] <= mid){
			pageSum+=arr[i];
		}

		else{
			studentCount++;
			if(studentCount>m || arr[i]>mid){
				return false;
			}
			pageSum=arr[i];
		}
		
	}
	return true;
}
int main(){
	int arr[4]={10,20,30,40};
	int n=4;
	int m=2;
	int s=0,sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int e=sum;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(isPossible(arr,n,m,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	
		
	}
	cout<<ans;
}
