#include <iostream>
#include<cstring>
using namespace std;
void reverse(int i ,string& s){
    int n = s.length();
    if(i>(n-i-1)){
        return;
    }
    swap(s[i],s[n-i-1]);
    i++;
    reverse(i,s);
}

int main() {
    
    string s = "kunal";
    int n = s.length();
    int i = 0;
    reverse(i,s);
    cout<<s<<endl;

    return 0;
}