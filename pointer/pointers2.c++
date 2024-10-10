#include <iostream>
using namespace std;

void print(int arr[],int n){
    cout<<*arr<<endl;
    arr = arr+1;
    cout<<arr<<endl;
    cout<<*arr<<endl;
    // *arr = *arr + 34;

}

int getSum(int arr[], int n ){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {

    int arr[5]={1,2,3,4,5};
    
    /*
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<(arr+1)<<endl;
    cout<<&arr[1]<<endl;

    int i=3;
    cout<<i[arr]<<endl;
    cout<<arr[i]<<endl;
    cout<<*(arr+i)<<endl;

    
   int *p = &arr[0];
   cout<<sizeof(arr)<<endl;
   cout<<sizeof(arr[0])<<endl;
   cout<<sizeof(*arr)<<endl;
//    cout<<sizeof(&arr)<<endl;  ERROR
   cout<<sizeof(p)<<endl;
   cout<<sizeof(*p)<<endl;
   cout<<sizeof(&p)<<endl;
   

// TODO              CHAR ARRAY

    char ch[6]="abcde";
    char *c = &ch[0];
    cout<<ch<<endl;
    cout<<c<<endl;          //? c me puri string chali jayegi
    cout<<&c<<endl;
    cout<<&ch<<endl;
    cout<<*c<<endl;

    */

   // ?               FUNCTIONS

    print(arr,5);
    cout<<arr[1]<<endl;
    cout<<getSum(arr,5)<<endl;
    








    return 0;
}