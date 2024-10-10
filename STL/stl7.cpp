#include <iostream>
#include <queue>
using namespace std;
int main() {
    cout<<"** Priority Queue **"<<"\n";
    cout<<"\n";

    priority_queue<int> max; //max heap means phle maximum element pop hoga 
    priority_queue<int ,vector<int>,greater<int>> mini; // mini heap means phle minimum element pop hoga
    max.push(1);
    max.push(2);
    max.push(2);
    max.push(4);
    int size_max = max.size();
    
    for(int i = 0 ;i<4 ; i++){
        mini.push(i);
    }

    int size_mini = mini.size();
    cout<<"Max Heap: "<<"\n";
    for(int i=0 ; i<size_max ;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<"\n";

    cout<<"Min Heap: "<<"\n";
    for(int i=0 ; i<size_mini ;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<"\n";
    return 0;
}