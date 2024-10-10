#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a integer ";
	cin>>n;
	for(int i=0;i<=30;i++){
            int ans = pow(2,i);
            if(ans==n){
                return 1;
            }
            
        }
       return 0;
}
