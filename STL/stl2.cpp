#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//create a vector
    v.push_back(1);//enter the value in it 
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i:v){
        cout<<i<<" ";//print the vector
    }cout<<endl;
    cout<<"The size of vector is -> " <<v.size()<<endl;//to print the size of vector
    cout<<"The element at 2nd index is -> "<<v.at(2)<<endl;//print the element at specific index
    cout<<"The first element is -> "<<v.front()<<endl;// print first element 
    cout<<"The last element is -> "<<v.back()<<endl;//print last element
    v.pop_back();   // delete last element
    for(int i:v){
        cout<<i<<" ";//print the vector
    }cout<<endl;


}