#include<iostream>
using namespace std;
int main(){
	int maxSize=10;
	int crrSize=5;
	int val = 9;
	int arr[maxSize];
	for(int i=0;i<crrSize;i++){
		cout<<"Enter a number : "<<"\n";
		cin>>arr[i];
	}
	for(int i=0;i<crrSize;i++){
		cout<<"\t"<<arr[i];
	}
	
	cout<<"\n";
	
	
	if(crrSize<maxSize){
		arr[crrSize]=val;
		crrSize++;
	}
	
	for(int i=0;i<crrSize;i++){
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
	
	int val1=10;
	if(crrSize<maxSize){
		for(int i=crrSize ; i>0 ; i--){
		arr[i]=arr[i-1];
		}
		
		arr[0]=val1;	
		crrSize++;
	}
	
	
	for(int i=0;i<crrSize;i++){
		cout<<"\t"<<arr[i];
	}
	
	cout<<"\n";
	
	int val2=32;
	int idx=3;
	if(crrSize<maxSize){
	    for(int i=crrSize ; i>idx-1 ; i--){
	        arr[i]=arr[i-1];
	}
	arr[idx]=val2;
	    crrSize++;
	}
	
	
	for(int i=0;i<crrSize;i++){
		cout<<"\t"<<arr[i];
	}
	
	
	
}
