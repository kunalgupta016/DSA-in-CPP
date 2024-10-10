#include<iostream>
using namespace std;
int main(){
	int ans=0;
	int arr[]={4,3,2,7,8,3,2,1};
	int size=sizeof(arr)/sizeof(int);
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	for(int i= 1 ;i<=size;i++){
		ans=ans^i;
	}
//	for(int i=0;i<size;i++){
//		if(ans==arr[i])
//	}
	cout<<ans<<"\n";
	int a=10^1^2;
	cout<<a;
}
