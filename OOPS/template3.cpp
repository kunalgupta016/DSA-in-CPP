#include <iostream>
using namespace std;

template <class T1=int , class T2=float>
class Sum{

    public:
    T1 FirstValue;
    T2 SecondValue;
            Sum(T1 F , T2 s){
            FirstValue = F;
            SecondValue = s;
        }
        void  res(){
            cout<< FirstValue + SecondValue<<endl;
        }
};

int main() {
    Sum <int>s ('3', 4);
    s.res();
    Sum <int> s1(4,true);
    s1.res();
    return 0;
}