#include<iostream>
using namespace std;
int main(){
	int arr[7]={10,1,2,7,6,1,5};
	int s=8;
	for(int i=0;i<7;i++){
		for(int j=i+1 ; j<7 ; j++){
			for(int k=j+1 ; k<7 ; k++){
				if(arr[i]+arr[j]+arr[k]==s){
					cout<<arr[i]<<arr[j]<<arr[k]<<"\n";
					
				}
				
			}
		}
	}
	for(int i = 0 ;i<7;i++){
		for(int j=i+1 ;j<7;j++){
			if(arr[i]+arr[j]==s){
				cout<<min(arr[i],arr[j]);
				cout<<max(arr[i],arr[j]);
				cout<<"\n";
			}
		}
	}
}
