#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // create
    unordered_map<string,int> m;
    // insert
        //1
    pair<string,int> p = make_pair("Kunal",1);
    m.insert(p);
        //2
    pair<string,int> pair2 = make_pair("Kunal",2);
    m.insert(pair2);
        // 3
    m["Kunal"] = 3;


    // Searching 
    cout<<m["Kunal"]<<endl;
    cout<<m.at("Kunal")<<endl;
    cout<<m["hello"]<<endl;
    // cout<<m.at("k")<<endl; // error

    // size
    cout<<m.size()<<endl;
    
    //  check presence
    cout<<m.count("Kunal")<<endl;

    // erase
    // m.erase("Kunal");
    // cout<<m.size()<<endl;


    // print map
    unordered_map<string,int>::iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first << " "<<it->second;
        it++;
    }



    return 0;
}