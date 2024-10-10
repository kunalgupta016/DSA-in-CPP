#include<iostream>
using namespace std;

 int  srt(int n){
	
	int s=0;
	int e=n;
	int mid=s+(e-s)/2;
	int ans=-1;
	

	while(s<=e){
		int arr=mid*mid;
			
		if(arr==n){
			return mid;
		}
		if(arr<n){
			ans=mid;
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
	
	cout<<srt(63);
}
