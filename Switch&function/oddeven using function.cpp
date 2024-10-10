#include<iostream>
using namespace std;
bool isEven(int a){
	if(a%2==0){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	cout<<"Enter a number";
	cin>>n;
	bool ans = isEven(n);
	if(ans==1){
		cout<<"Your number is even !"<<"\n";
	}
	else{
		cout<<"your number is odd !"<<"\n";
	}
	
}
