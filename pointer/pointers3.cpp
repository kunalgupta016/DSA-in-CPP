#include <iostream>
using namespace std;

int getSum(int arr[] , int n){
    int sum = 0;
    for(int i = 0 ;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

void update2(int& n){  //  function using reference variable
    n++;
}

void update1(int n){
    n++;
}

int main() {


    int n = 5;
    cout<<"The value of n is : "<<n<<endl;
    cout<<sizeof(n)<<endl;
    int *ptr = &n;
    cout<<"THhe value of ptr is : "<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;


    int& m = n;   // reference variable
    cout<<"The value of m is : "<<m<<endl;
    cout<<sizeof(m)<<endl;

    update1(n);
    cout<<"The value of n is : "<<n<<endl;

    update2(n);
    cout<<"The value of n is: "<<n<<endl;


    int *k = new int;
    *k = 14;
    cout<<*k<<endl;

    int l;
    cin>>l;


    int *arr = new int[l];
    
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    cout<<getSum(arr,l)<<endl;



    return 0;
}