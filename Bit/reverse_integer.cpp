/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number ";
	cin>>n;
	int ans=0;
	while(n!=0){
		int digit = n%10;
		ans = (ans*10)+ digit;
		n = n/10;
	}
	cout<<ans<<"\n";
}

*/

// For leet code

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x!=0){
            int digit = x%10;
            if((ans > INT_MAX/10) || ans < INT_MIN/10){
                return 0;
            }
            ans = (ans * 10)+ digit ;
            x = x/10;
        }
        return ans ;
    }
};
