#include<iostream>
using namespace std;
int fact(int n){
	int num= 1;
	for(int i=1;i<=n;i++){
		num = num*i;
	}
	return num;
}
int nCr(int n,int r){
	int num = fact(n);
	int denom = fact(r)*fact(n-r);
	int ans = num/denom;
	return ans;
}
int main(){
	int n,r;
	cout<<"enter the value of n ";
	cin>>n;
	cout<<"Enter the value of r";
	cin>>r;
	cout<<"The factorial is "<<nCr(n,r)<<"\n";
}
