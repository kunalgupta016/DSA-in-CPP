#include <iostream>
#include<string>
using namespace std;

char tolower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch;
        temp = temp - 'A' + 'a';
        return temp;
    }
}



int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverseString(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }

}

bool checkpalindrome(char name[] , int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(tolower(name[s])!=tolower(name[e])){
            return 0;
        }
        else{
            
            s++;
            e--;
        }
    }
    return 1;
}


string reverseStringFromNUmber(string s,int k){
    int len = s.size();
    for(int i=0;i<len;i=i+2*k){
        if(i+k<=len){
            swap(s[i],s[i+k]);
        }
    }
    return s;
}

char getMaxiOccCharacter(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        int number;
        char ch = s[i];
        number = ch-'a';
        arr[number]++;   
    }
    int ans=0,maxi=-1;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }

    }
    return 'a'+ans;
}



int main() {


    char name[20];
    cout<<"Enter Your Name : "<<"\n";
    cin>>name;
    cout<<"Your Name is : "<<name<<endl;



    int len = getLength(name);
   cout<<"The length of name is "<<len<<"\n";


    reverseString(name,len);
    cout<<"Your Name is : "<<name<<endl;


    cout<<" Palindrome or Not :- " <<checkpalindrome(name,len)<<"\n";

    string s;
    cout<<"Enter a string "<<"\n";
    cin>>s;
    cout<<" The maximum occurence charcter in string is  " <<getMaxiOccCharacter(s)<<"\n";


    cout<<"The reverse string from a k=2 ans from 2*k also is : "<<reverseStringFromNUmber(s,2)<<endl;
    return 0;
}