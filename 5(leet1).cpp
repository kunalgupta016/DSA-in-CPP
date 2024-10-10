#include<iostream>
using namespace std;
int main(){
	int n,prod=1,sum=0;
	cout<<"Enter a number : ";
	cin>>n;
	while(n!=0){
		int digit=n%10;
		prod=prod*digit;
		sum=sum+digit;
		
		n=n/10;
	}
	int ans=prod-sum;
	cout<<ans;
}
