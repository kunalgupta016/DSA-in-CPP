#include <iostream>
using namespace std;

template <class T1 , class T2>
class Sum{

    public:
    T1 FirstValue;
    T2 SecondValue;
            Sum(T1 F , T2 s=1){
            FirstValue = F;
            SecondValue = s;
        }
        void  res(){
            cout<< FirstValue + SecondValue<<endl;
        }
};

int main() {
    Sum <int,char>s ('3');
    s.res();
    Sum <float,int> s1(4);
    s1.res();
    return 0;
}