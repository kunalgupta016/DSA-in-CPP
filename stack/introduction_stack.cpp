#include <iostream>
using namespace std;

class stack{
    public:
        int top ;
        int *arr;
        int size;

        stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int ele){
            // bhar gya ki nahi 
            if(top == size-1){
                cout<<"Bhai bhar gy array nahi bhar sakta aur"<<endl;
                return;
            }
            else{
                top++;
                arr[top]  = ele;
            }
        }
        void pop(){
            if(isempty()){
                cout<<"Bhai khali hai kya delte karega "<<endl;
                return;
            }
            else{
                top--;
            }
        }
        int peek(){
            if(top>=0)
                return arr[top];
            else{
                return -1;
            }
        }
        bool isempty(){
            return top<0;
        }

        void print(){
            int temp  = top;
            while(temp>=0){
                cout<<arr[temp]<<" ";
                temp--;
            }cout<<endl;
        }
};

int main() {
    stack st(5);

    // inserting element
    st.push(22);
    st.push(43);
    st.push(44);
    //print
    st.print();
    //peek element
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
}