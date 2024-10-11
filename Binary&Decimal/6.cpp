#include<iostream>
#include<math.h>
using namespace std;
int main(){
// CONVERT DECIMAL TO BINARY
/*
	int n;
	cin>>n;
	
	int ans=0;
	int i=0;
	while(n!=0){
		int bit = n&1;
		ans = (bit*pow(10,i))+ans;
		n = n>>1;
		i++;
	}
	cout<<"The answer is "<<ans;
	
	*/
	
	
	// COVERT NEGATIEV NUMBER INTO BINARY
	
	int n;
	cin>>n;
	
	int ans=0;
	int i=0;
	while(n!=0){
		int bit = n&1;
		ans = (bit*pow(10,i))+ans;
		n = n>>1;
		i++;
	}
	cout<<"The answer is "<<~ans+1;

	
	
	
}
