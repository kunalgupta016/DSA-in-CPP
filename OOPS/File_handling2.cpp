#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    
    ofstream hout;
    hout.open("Sample.txt");
    hout<<"This is kunal";
    hout.close();

    ifstream hin;
    hin.open("Sample.txt");
    string st;
    while(hin.eof()==0){
        getline(hin,st);
        cout<<st;
    }
    hin.close();
    
    return 0;
}
