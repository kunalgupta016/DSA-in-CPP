#include<iostream>
using namespace std;
int main(){
	int arr[5]={3,7,3,7,6};
	int ans=0;
	for(int i=0;i<5;i++){
		ans=ans^arr[i];
	}
	cout<<ans<<"\n";
}
