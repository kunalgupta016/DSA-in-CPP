#include<iostream>
using namespace std;
void printarr(int arr[],int size){
	cout<<"Printing Array"<<"\n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
	cout<<"printing done"<<"\n";
}
int main(){
	int f_a[3];
	for(int i=0;i<3;i++){
		cin>>f_a[i];
	}
	printarr(f_a,3);
	
}
