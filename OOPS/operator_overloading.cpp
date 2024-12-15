#include <iostream>
using namespace std;

class Complex{
    float real,img;
    public:
        Complex(){
            real=img=0.0;
        }
        Complex(float r,float i){
            real = r;
            img =i;
        }
        void show(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        Complex operator+(Complex c){
            Complex t;
            t.real = real + c.real;
            t.img = img + c.img;
            return t;
        }
};



int main() {

    Complex C1(3,4);
    Complex C2(4,5);
    Complex C3;
    C3 = C1+C2;
    C3.show();

    return 0;
}