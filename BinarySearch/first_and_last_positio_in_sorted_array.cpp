#include<iostream>
using namespace std;
int firstOccurence(int arr[] , int  n , int key){
	
	int s=0,e=n-1;
	int mid = s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
		
	}
	return ans;
	
	
}

int LastOccurence(int arr[] , int  n , int key){
	
	int s=0,e=n-1;
	int mid = s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
		
	}
	return ans;
	
	
}

int main(){
	int arr[12]={1,2,3,3,3,3,3,4,5,6,7,7};
	cout<<"The 3 first occurence is at index "<<firstOccurence(arr , 12 , 3)<<"\n";
	cout<<"The 3 last occurence is at index "<<LastOccurence(arr , 12 , 3);
}
