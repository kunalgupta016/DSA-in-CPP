#include <iostream>
using namespace std;

class Base{
    public:
        int varBase;
        virtual void show(){
            cout<<"VarBase is : "<<varBase<<endl;
        }
};

class Derived : public Base{
     public:
        int varDerived = 100;
        void show(){
            cout<<"VarBase is : "<<varBase<<endl;
            cout<<"VarDerived is : "<<varDerived<<endl;
        }
};


class Second_Derived : public Derived{
     public:
        int varDerived2 = 101;
        void show(){
            cout<<"VarBase is : "<<varBase<<endl;
            cout<<"VarDerived is : "<<varDerived<<endl;
            cout<<"VarDerived2 is : "<<varDerived2<<endl;
        }
};

int main() {

    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->varBase = 34;
    base_class_pointer->show();

    Base* base_class_pointer2;
    Second_Derived obj_Second_derived;
    base_class_pointer2  = &obj_Second_derived;
    base_class_pointer2->show();


    return 0;
}