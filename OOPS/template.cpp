#include <iostream>
using namespace std;

template <class T>
class Sum{

    public:
    T FirstValue;
    T SecondValue;
            Sum(T F , T s){
            FirstValue = F;
            SecondValue = s;
        }
        void  res(){
            cout<< FirstValue + SecondValue<<endl;
        }
};

int main() {
    Sum <int>s (2, 3);
    s.res();
    Sum <float> s1(2.3, 4.5);
    s1.res();
    return 0;
}