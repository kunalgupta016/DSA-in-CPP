#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    cout<<" ** The queue follow FIFO rule ** "<<"\n";
    cout<<"\n";
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<"The first element is -> "<<q.front()<<"\n";
    cout<<" The last element is -> "<<q.back()<<"\n";
    int size = q.size();
    while(!q.empty()){
        cout<<q.front()<<"\n";
        q.pop();
    }
    cout<<"\n";

    return 0;
}