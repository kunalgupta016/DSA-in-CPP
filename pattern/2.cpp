#include<iostream>
using namespace std;
int main(){
	int n,a,b;
	char c;
//	cout<<"Enter the number";
//	cin>>n;
//	
//	if(n>0){
//		cout<<"The number is positive";
//		
//	}
//	else{
//		cout<<"The number is negative";
//	}
//	cin>> a>> b;
//	cout<<"The value of a is  "<<a << " B is : " << b;
//	
//	a=1;
//	if(a==1){
//		cout<<"KA";
//	}
//	if(a>0){
//		cout<<"KG";
//	}
//	else{
//		cout<<"O";
//	}
	cout<<"Enter the value of c :";
	cin>>c;
	int ascii= c;
	if(ascii>=65 && ascii<=90){
		cout<<"It is in uppercase";
	}
	else if (ascii>=97 && ascii<=122){
		cout<<"It is in lowercase";
	}
	else if(ascii>=48 && ascii<=57){
		cout<<"It is a numeric";
	}
	else{
		cout<<"You enter a anything ";
	}



}
