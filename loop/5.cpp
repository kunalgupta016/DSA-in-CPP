 #include<iostream>
 using namespace std;
 int main(){
	int n=10;
	int a=0,b=1;
	cout<<a<<"\n"<<b<<"\n";
	for(int i=1;i<=n;i++){
		int nextn=a+b;
		cout<<nextn<<"\n";
		a=b;
		b=nextn;
	}
 }
