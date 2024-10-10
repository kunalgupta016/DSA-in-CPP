#include<iostream>
using namespace std;
int main(){
	int n=4;
// For 1st half
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int j=1;j<=2*(n-i);j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	// For 2nd Half
		for(int i=4;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int j=1;j<=2*(n-i);j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
