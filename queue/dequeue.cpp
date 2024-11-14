#include <iostream>
using namespace std;

class dequeue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    dequeue(){
        size = 5;
        arr = new int[size];
        front = rear = -1;
    }
    void push_front(int x){
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<"bhara hai"<<endl;
            exit(0);
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front==0 && rear!=size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = x;
    }
    void push_back(int x){
        
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))){
            cout<<" jagah nahi hai "<<endl;
            exit(0);
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

    void pop_front(){
        int ans = arr[front];
        if(front==-1){
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

    void pop_rear(){
        int ans = arr[rear];
        if(front==-1){
            cout<<"khali hai"<<endl;
            exit(0);
        }
        else if(front==rear){
            front = rear=-1;
        }
        else if (rear==0)
        {
            rear = size-1;//cyclic h jayega 
        }
        else{
            rear--;
        }
        cout<<"front: "<<ans<<endl; 
    }
    

}

int main() {
    
    return 0;
}