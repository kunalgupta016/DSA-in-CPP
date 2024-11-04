#include <iostream>
using namespace std;

class twostack(){
    public:
        int *arr;
        int top1;
        int top2;
        int size;
    
    twostack(int s){
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void push1(int e){
        if(top2-top1>1){
            top1++;
            arr[top1]=e;
        }
        else{
            cout<<"overflow";
            return;
        }
    }

    void pop1(){
        if(top1==-1){
            cout<<"underflow"<<endl;
        }
        else{
            top1--;
        }
    }
    void push2(int e){
        if(top2-top1>1){
            cout<<"overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]=e;
        }
    }
    void pop2(){
        if(top2=size){
            cout<<"underflow"<<endl;
        }
        else{
            top2++;
        }
    }
}


int main() {
    twostack tst(5);
    tst.push1(23);
    tst.push2(34);
    tst.push1(12);
    tst.push2(11);
    tst.push1(111);

    return 0;
}