/*
    FUNCTION TEMPLATE   
*/

#include<iostream>
using namespace std;


template <class T>
void swaping(T &a ,T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class T1,class T2>
float avg(T1 a, T2 b){
    return (a+b)/2;
}

int main(){
    cout<<avg(10,20)<<endl;
    int a = 10;
    int b = 20;
    swaping(a,b);
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}