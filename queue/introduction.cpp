#include <iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;


    queue(){
        size  =1000;
        arr = new int[size];
        front = rear = 0;
    }

    void enqueue(int d){
        if(isfull()){
            cout<<"  Bhai jagah hi nahin hain  "<<endl;
        }
        else{
            arr[rear] = d;
            rear++;
        }
    }

    void dequeue(){
        if(isempty()){
            cout<<"  Bhai queue khali hai  "<<endl;
        }
        else{
            int ans = arr[front];
            arr[front] =  -1;
            front++;
            if(front==rear){
                front = rear = 0;
            }
            cout<<"The dequeue ele is : "<<ans<<endl;
            cout<<endl;
        }
    }

    bool isfull(){
        if(rear == size){
            return true;
        }
        else{
            return false;
        }
    }

    bool isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void fr(){
        if(front==rear){
            cout<<"  Bhai queue khali hai  "<<endl;
            cout<<endl;
        }
        else{
            cout<<"The front element is : "<<arr[front]<<endl;
            cout<<endl;
        }
    }

    void print(){
        int temp = front;
        cout<<"The elements are: ";
        for(int i=temp;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
};

int main() {
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.fr();
    q.print();
    q.dequeue();
    q.print();
    q.fr();
    q.print();
    return 0;
}