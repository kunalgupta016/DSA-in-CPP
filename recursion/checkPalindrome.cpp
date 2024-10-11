#include <iostream>
using namespace std;

bool checkPalindrome(int i,int j,string& s){
    if(i>j){
        return true;
    }
    if(s[i]==s[j]){
        i++;
        j--;
    }
    else{
        return false;
    }
    checkPalindrome(i,j,s);

}

int main() {
    string s = "aabbccbbA";
    int i = 0;
    int j = s.length()-1;
    int ans = checkPalindrome(i,j,s);
    if(ans){
        cout<<"palindrome h! "<<endl;
    }
    else{
        cout<<"Afsos nahi h"<<endl;
    }
    return 0;
}