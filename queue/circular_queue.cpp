#include <iostream>
using namespace std;

class circularQueue{
    public:
    int *arr;
    int front;
    int rear;
    int size;
    circularQueue(){
        size  = 7;
        arr = new int[size];
        front = rear = -1;
    }
    void enqueue(int data){
        if(isFull()){
            cout<<" jagah nahi hai "<<endl;
        }
        else if(front==-1){
            // phla element 
            rear=front=0;
            arr[rear] = data;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }

    bool isFull(){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)) ){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void dequeue(){
        int ans = arr[front];
        if(isEmpty()){
            cout<<"khali hai"<<endl;
            exit(0);
        }
        else if(front==rear){
            front = rear=-1;
        }
        else if (front==size-1)
        {
            front = 0;//cyclic h jayega 
        }
        else{
            front++;
        }
        cout<<"front: "<<ans<<endl; 
    }
};

int main() {
    circularQueue cq;
    cq.enqueue(10);
    cq.enqueue(11);
    cq.enqueue(12);
    cq.enqueue(13);
    cq.enqueue(14);
    cq.enqueue(15);
    cq.enqueue(16);

    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    return 0;
}