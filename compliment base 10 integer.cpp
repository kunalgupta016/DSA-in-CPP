
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0){
        cout<<"1"<<"\n";
    }
    while(m!=0){
        mask = (mask<<1)|1;
        m=m>>1;
    }
    int ans = (~n)&mask;
    cout<<ans<<"\n";
    return 0;
}
