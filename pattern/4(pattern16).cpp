#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the viue of n ";
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=i;j<=n;j++){
			char ch='A'+j-1;
			cout<<ch<<" ";
			
		}
		cout<<"\n";
	}
}
