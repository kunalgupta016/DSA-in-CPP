#include<iostream>
using namespace std;
bool isPrime(int n){
	if(n==1){
		return 0;
	}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return 0;
		}
		else{
			return 1;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int ans = isPrime(n);
	if(ans==0){
		cout<<"Not Prime";
	}
	else{
		cout<<"Prime";
	}
}

