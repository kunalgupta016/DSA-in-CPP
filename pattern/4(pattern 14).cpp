#include<iostream>
using namespace std;
int main(){
	int n;
	int count=1;
	cout<<"enter a number ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			
			char ch='A'+count-1;
			cout<<ch;
			count++;
		}
		cout<<"\n";
	}
}
