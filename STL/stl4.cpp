#include <iostream>
#include <list>
using namespace std;
int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);
    l.push_front(6);
    for(int i:l){
        cout<<i<<" ";
    }cout<<"\n";

    l.erase(l.begin());
    cout<<"After erase"<<"\n";
    for(int i:l){
        cout<<i<<" ";
    }cout<<"\n";

    return 0;
}

