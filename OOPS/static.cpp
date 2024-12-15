#include <iostream>
using namespace std;

class Rect{
    public:
        static int length;
        static int breadth;

        static area(){
            return length * breadth;
        }
};

int Rect::length = 10;
int Rect::breadth = 5;

int main() {
    
    Rect r;
    cout<<r.area()<<endl;
    cout<<Rect::area()<<endl;


    return 0;
}