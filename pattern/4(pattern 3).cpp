#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<< "Entrer the value of n";
	cin>> n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout << j;
		}
		cout << "\n";
	}
	
//	 second pattern 

cout<< "\n";
cout<< "\n"; 
		for(i=1;i<=n;i++){
		for(j=n;j>=1;j--){
			cout << j;
		}
		cout << "\n";
	}
}

