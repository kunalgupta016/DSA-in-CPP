#include<iostream>
using namespace std;

int  srt(int n){
	
	int s=0;
	int e=n;
	int mid=s+(e-s)/2;
	int ans=-1;
	

	while(s<=e){
		int arr=mid*mid;
			
		if(arr==n){
			return mid;
		}
		if(arr<n){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	
	return ans;	
	
}

double squarePrecise( int n , int precise , int temp  ){
	double factor = 1;
	double ans = temp;
	for(int i=0;i<precise ; i++){
		factor = factor / 10;
		for(double j = ans ; j*j<n ; j=j+factor){
			ans = j;
		}
	}
	return ans;
}


int main(){
	int n;
	cout<<"Enter a number"<<"\n";
	cin>>n;
	int tempSolution = srt(n);
	cout<<"The precise solution of square root of a number is "<<squarePrecise( n , 3 , tempSolution);
	
}
