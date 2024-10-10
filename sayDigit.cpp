#include <iostream>
using namespace std;

void sayDigit(int n , string arr[]){
    if(n==0){
        return ;
    }
    else{
        int digit ;
        digit = n%10;
        n = n/10;
        sayDigit(n,arr);
        cout<<arr[digit]<<endl;
    }
}



int main() {

    string arr[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n = 4120;
    sayDigit(n,arr);


    return 0;
}