#include <iostream>
#include<stack>
using namespace std;
int main() {
    stack<string>s;
     cout<<" ** The stack follow LIFO rule **"<<"\n";
    cout<<"\n";
    s.push("Kunal");
    s.push("Kriti");
    s.push("Kanha Ji");
    int size = s.size(); 
    for(int i=0;i<size;i++){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}