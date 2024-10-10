#include<iostream>
using namespace std;
int countbit1(int n){
	int count=0;
	while(n!=0){
		if(n&1){
			count++;
		}
		n=n>>1;
	}
	int ans=count;
	return ans;
}
int main(){
	int a,b;
	cin>>a>>b;
	int ans1=countbit1(a);
	int ans2=countbit1(b);
	int ans3=ans1+ans2;
	cout<<"The number of 1 is"<<ans3<<"\n";
}
