#include <iostream>
#include <deque>
using namespace std;
int main() {

    deque<int>dq;
    dq.push_front(12);
    dq.push_back(13);
    cout<<"front: "<<dq.front()<<endl;
    cout<<"back: "<<dq.back()<<endl;
    dq.pop_front();
    cout<<"front: "<<dq.front()<<endl;
    cout<<"back: "<<dq.back()<<endl;
    dq.pop_back();
    if(dq.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    return 0;
}