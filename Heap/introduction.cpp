#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        // ab shi position pe pahuchana hai
        while (index > 1)
        {
            int parent = index / 2;
            // ab checlk karo for max heap
            if (arr[parent] < arr[index])
            {
                // swap karo
                swap(arr[parent], arr[index]);
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromheap()
    {
        if (size == 0)
        {
            cout << "Kuch nhi hai" << endl;
        }
        // last element ko root node me daal do 
        int i = 1;  
        arr[i] = arr[size];
        // remove last element
        size--;
        // shi jaagah par pahuchao root node ko 
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int *arr , int n , int i){
    int largest = i ;
    int left = 2*i;
    int right = 2*i+1;

    if(left<=n  && arr[largest]<arr[left]){
        largest = left ;
    }
    if(right <= n && arr[largest]<arr[right]){
        largest = right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(int *arr, int n){
    int size = n ;
    while(size>1){
        //step 1
        swap(arr[size],arr[1]);
        size--;
        // step 2
        heapify(arr,size,1);
    }
}


int main()
{

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromheap();
    h.print();
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    // heap creation
    for(int i=5/2 ; i>0 ;i--){
        heapify(arr,n,i);
    }
    cout<<"Printing arrray"<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // heapsort
    heapSort(arr,n);
    cout<<"Printing sorted array"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // priority queue
    cout<<"using priority Queue"<<endl;
    priority_queue<int> pq;
    pq.push(3);
    pq.push(4);
    pq.push(1);
    pq.push(2);
    cout<<"The top element:  "<<pq.top()<<endl;
    pq.pop();
    cout<<"The top element:  "<<pq.top()<<endl;
    cout<<"Size: "<<pq.size()<<endl;
    cout<<"Empty: "<<pq.empty()<<endl;


    // min heap
    cout<<"using min heap"<<endl;
    priority_queue<int , vector<int> , greater<int>> minheap;
    minheap.push(3);
    minheap.push(4);
    minheap.push(1);
    minheap.push(2);
    cout<<"The top element:  "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"The top element:  "<<minheap.top()<<endl;
    cout<<"Size: "<<minheap.size()<<endl;
    cout<<"Empty: "<<minheap.empty()<<endl;


    return 0;
}