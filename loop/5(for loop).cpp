#include<iostream>
using namespace std;
int main(){
	/*for(int i=0;i<=5;i++){
		cout<<i<<" ";
		i++;
	}*/
	
	/*for(int i=0;i<=5;i--){
		cout<<i<<" ";
		i++;
	}*/
	
	/*for(int i=0;i<=15;i=i+2){
		cout<<i<<" ";
		if(i&1){
			continue;
		}
		i++;
	}*/
	
/*for(int i=0;i<5;i++){
		for(int j=i;j<=5;j++){
			cout<<i<<" "<<j<<"\n";
		}
	}
*/
	
	for(int i=0;i<5;i++){
		for(int j=i;j<=5;j++){
			if(i+j==10){
				break;
			}
			cout<<i<<" "<<j<<"\n";
		}
	}
}
