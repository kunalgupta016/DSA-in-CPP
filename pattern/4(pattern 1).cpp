#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of n";
	cin>> n;
	/*while(i<=n){
		int j=1;
		while(j<=n){
			cout<< "*";
			j++;
		}
		cout<< "\n";
		i++;
	}	*/

	for(int k=1;k<=n;k++){
		for(int j=1;j<=n;j++){
			cout << "*";
		}
		cout << "\n";
	}
	
	
	
		
}

