#include<iostream>
using namespace std;
int main(){
	int arr[5]={3,4,5,1,0};
	int s=0;
	int e=4;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]<arr[mid+1]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		 mid=s+(e-s)/2;
	}
	cout<<s<<"\n";
	
}
