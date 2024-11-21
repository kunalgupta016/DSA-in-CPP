#include <iostream>
using namespace std;

class kqueue{
    public:
    int *arr;
    int *next;
    int *front;
    int *rear;
    int freeSpot;
    int k;
    int n;
    public:
    kqueue(int n,int k){
        this->k =k;
        this->n =n;
        arr = new int[n];
        next = new int[n];
        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1] = -1;
        front = new int[k];
        rear = new int[k];
        for(int i=0;i<k;i++){
            rear[i]=-1;
            front[i]=-1;
        }
        freeSpot = 0;
    }

    void enqueue(int data,int qn){
        // check overflow
        if(freeSpot == -1){
            cout<<"Bhai jagah nhai hai"<<endl;
            exit(0);
        }
        //find index
        int index = freeSpot;
        // update freeSpot
        freeSpot = next[index];
        // if first element
        if(front[qn-1]==-1){
            front[qn-1]=index;
        }
        // else nhi hai to
        else{
            // link karo 
            next[rear[qn-1]]=index;
        }

        // update karo next ko
        next[index]=-1;
        rear[qn-1]=index;
        arr[index]=data;
    }
    int dequeue(int qn){
        // underflow
        if(front[qn-1]==-1){ 
            cout<<"kahli hai"<<endl;
            return -1;
        }  
        
        // find index
        int index = front[qn-1];
        // front ko aage 
        front[qn-1]=next[index];
        // freeslot ko manage

        next[index] = freeSpot;
        freeSpot = index; 
        return arr[index];
    }
};


int main() {
    kqueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    return 0;
}