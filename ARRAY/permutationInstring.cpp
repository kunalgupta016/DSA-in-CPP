#include <iostream>
#include <string>
using namespace std;

bool isequal(int a[26] , int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }

    }
    return 1;
}


int checkPermut(string s1,string s2){
    int count[26]={0};
    for(int i=0;i<s2.size();i++){
        int idx = s2[i]-'a';
        count[idx]++;
    }

    int count2[26]={0};
    int windowSize = s2.length();
    int i = 0;
    while(i<windowSize && i<s2.length()){
        int idx = s2[i]-'a';
        count2[idx]++;
        i++;
    }
    if(isequal(count,count2)){
        return 1;
    }

    while(i<s2.length()){
        char newChar = s2[i];
        int idx = newChar-'a';
        count2[idx]++;

        char oldChar = s2[i-windowSize];
        idx = oldChar-'a';
        count2[idx]--;
        i++;
        if(isequal(count,count2)){
        return 1;
    }
        
    }
    return 0;
}



int main() {
    string s1 = "eidbaoo";
    string s2 = "ab";

    if(checkPermut(s1,s2)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}