#include<iostream>
using namespace std;
int main(){
	int n,count=1;
	cout<< "Enter the value of n";
	cin>> n;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			char ch='A'+j+i;
			cout << ch;
		}
		cout << "\n";
	}
	
}
