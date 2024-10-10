#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = " Hello my n";
    string temp = "";
    string ans = "";
    for(int i=0;i<s.length();i++){
        temp = " ";
        for(int j = 0 ;j<s.length(),s[i] != ' ';j++){
            temp = temp + s[i];
        }
        for(int j=0 ; j<s.length(),s[i] == ' ';j++){
            continue;
        }
        if(!temp.empty()){
            if(ans.empty()){
                ans+=temp;
            }
            else{
                ans = temp + ' ' + ans;
            }
        }
    }
    cout<<ans;   
    return 0;
}