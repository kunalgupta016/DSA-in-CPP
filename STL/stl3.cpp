#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;//create a deque
    d.push_back(1);//enter the value in it 
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_front(5);
    d.push_front(6);
    d.push_front(7);
    cout<<"[";
    for(int i:d){
        cout<<i<<" ";//print the deque
    }cout<<"]";
    cout<<endl;
    cout<<"The size of deque is -> " <<d.size()<<endl;//to print the size of deque
    cout<<"The element at 2nd index is -> "<<d.at(2)<<endl;//print the element at specific index
    cout<<"The first element is -> "<<d.front()<<endl;// print first element 
    cout<<"The last element is -> "<<d.back()<<endl;//print last element
    d.pop_back();   // delete last element
    d.pop_front();
    cout<<"[";
    for(int i:d){
        cout<<i<<" ";//print the deque
    }cout<<"]";
    cout<<endl;
    d.erase(d.begin(),d.begin()+2);// erase the element from a range eg. d.begin()=first element d.begin()+2=first element+2 se phle tk
    cout<<"After erase"<<"\n";
    cout<<"[";
    for(int i:d){
        cout<<i<<" ";//print the deque
    }cout<<"]";
    cout<<endl;
    

}