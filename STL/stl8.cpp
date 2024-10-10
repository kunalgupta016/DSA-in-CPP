#include <iostream>
#include <set>
using namespace std;
int main() {
    cout<<"** SET ** "<<endl;
    cout<<"\n";

    set<int> s;
    for(int i=0 ; i<5 ; i++){
        s.insert(i*2); // add element use insert

    }
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"The elment 4 is present or not ->  "<<s.count(4)<<"\n";
    return 0;
}