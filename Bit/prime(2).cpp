#include<iostream>
using namespace std;
int main(){
	int n,i=0;
	cout<<"Enter number : "<<"\n";
	cin>>n;
	if(n==1 || n==0){
		cout<<"Prime"<<"\n";
	}
	
	i=i+2;
	while(i<=(n/2)){
		if(n%i==0){
			cout<<" NOt Prime"<<"\n";
			break;}
		i++;}
	if(i>(n/2)){
		cout<<"Prime"<<"\n";
	}
}
