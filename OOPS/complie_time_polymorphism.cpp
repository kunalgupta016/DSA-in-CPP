#include <iostream>
using namespace std;

class A{
    public:
        void show(int l){
            cout<<l<<endl;
        }
        void show(int l,int b){
            cout<<l<<endl;
            cout<<b<<endl;
        }
};


int main() {
    A a;
    a.show(3,4);
    a.show(3);
    return 0;
}