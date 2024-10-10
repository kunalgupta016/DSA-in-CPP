#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<< "Enter the value of n";
	cin>> n;
	
// Print 1 to n and sum also	
/*	i=1;
	while(i<=n){
		cout<< i <<"\n";
		sum=sum+i;
		i++;
		
	}
	cout<< "Sum is:- "<< sum << "\n";

*/

// Print 1 to n only even number and sum also 
/*	i=1;
	while(i<=n){
		if(i%2==0){
			cout<< i<<"\n";
			sum=sum+i;
		}
		i++;
	}	

	cout<< "The sum is:- "<< sum << "\n";
*/

//change celsius into fahrenheit

/*	int cel;
	int fren;
	cout<< "Enter The value of celsius\n";
	cin>> cel;
	fren= (cel*9/5)+32;
	cout<< "the value in Fahrenheit is:- "<<fren<<"\n";
*/


//Check prime number 
	i=2;
	int flag=1;
	while(i<=n/2){
		if(n%i==0){
			flag=0;
			break;
		}
		i++;
	}
	if(flag==1)
	{
		cout<<" Prime";
	}
	else if(flag==0){
		cout<< "Not a Prime number ";
	}


}
