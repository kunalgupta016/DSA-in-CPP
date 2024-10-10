#include<iostream>
#include<array>
using namespace std;
int main(){
	array<int,4> a  = {1,2,3,4};// create a array
	int size = a.size(); // size of array
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	cout<<"Element at 2nd Index :- "<<a.at(2)<<"\n";// to find element at specific index
	cout<<"Empty or not-> "<<a.empty()<<"\n"; // To find empty or not True=1 False = 0
	cout<<a.front()<<"\n"; // First element
	cout<<a.back()<<"\n"; // Last element
	
}

