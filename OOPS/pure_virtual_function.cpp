// jo class jisse derived banati ho use abstract base class khte hia 
// aur hum class ke function ko use nahi karna chhte hai lekin chhate hai ki uske derived class 
// bane aur un derived classse me uski nayi definition bane matlab ki agar derived class me 
// vo funtion na bane to code chale hi na 

/*

Example tesla motors ke pass alag alag models hai aur u sabhi me alag alag music system to apn 
ek class bana lenge music system ke naam se aur har ek model usko apni trh se modisfy kar lega lek
in ap simle music system ko nahi le vo apna khus ka hi bnaaye uske liye apn us base class me us 
function ko pure virtual function bana lange 
*/



#include <iostream>
using namespace std;

class Base{
    public:
        int varBase;
        virtual void show() = 0;
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

        /*
            Agr mai is show ko nahi banaau to ye base class ka le lega jisse ye point hai
        */

        /*
            lekin agar pure virtual function bna denge to ye function banana padega hi
        
        */

        void show(){
            cout<<"VarBase is : "<<varBase<<endl;
            cout<<"VarDerived is : "<<varDerived<<endl;
            cout<<"VarDerived2 is : "<<varDerived2<<endl;
        }



};

int main() {

    Base *base_class_pointer;
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