#include <iostream>
#include <map>
using namespace std;
int main() {
    cout<<" ** MAP **"<<"\n";
    cout<<"\n";

    map<int,string> m;
    m.insert({1,"Kanha Ji"}); // key value form 
    m.insert({11,"Kriti"}); // 11 is key and the value is Kriti
    m.insert({12,"Kunal"});
    m.insert({7,"Laddu Gopal"});

    for(auto i:m){
        cout<<i.first<<" " <<i.second<<"\n"; // first se keys  print hogi   second se value print hogi
    }
    cout<<"\n";
    return 0;
}