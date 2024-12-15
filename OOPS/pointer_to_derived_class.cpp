#include <iostream>
using namespace std;

class Base{
    public:
        int varBase;
        void show(){
            cout<<"VarBase is : "<<varBase<<endl;
        }
};

class Derived:public Base{
     public:
        int varDerived;
        void show(){
            cout<<"VarBase is : "<<varBase<<endl;
            cout<<"VarDerived is : "<<varDerived<<endl;
        }
};

int main() {

    Base * base_class_pointer;
    Derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->varBase = 34;
    base_class_pointer->show();
    // base_class_pointer->varDerived = 123;//throw error


    return 0;
}