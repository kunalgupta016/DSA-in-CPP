#include <iostream>
using namespace std;
int main() {
    int num = 5;

    cout<<num<<endl;
// address of operator -> &

    cout<< " The address by &num is :-  " <<&num<<endl;

    int *ptr = &num;

    cout<<"The address of num by ptr is  : "<<ptr<<endl;
    cout<<"The value at ptr is :- "<<*ptr<<endl;

    cout<<"The size of integer is "<<sizeof(num)<<endl;
    cout<<"The size of pointer is "<< sizeof(ptr)<<endl;


    cout<<"The value of num before ptr++ is :- "<<*ptr<<endl;
    (*ptr)++;
    cout<<"The value of num after ptr++ is :- "<<*ptr<<endl;


    return 0;
}