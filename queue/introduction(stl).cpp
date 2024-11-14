#include <iostream>
#include<queue>
using namespace std;
int main() {
    
    queue<int> q;
    
    q.push(11);
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    cout<<endl;

    q.push(15);
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    cout<<endl;

    q.push(13);
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    cout<<endl;

    cout<<"size: "<<q.size()<<endl;
    cout<<endl;

    q.pop();
    cout<<"size: "<<q.size()<<endl;
    cout<<endl;
    
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
        cout<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
        cout<<endl;
    }


    return 0;
}