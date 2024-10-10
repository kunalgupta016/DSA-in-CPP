#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    cout<<"** ALGORITHM **"<<"\n";
    cout<<"\n";

    vector<int>v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    v.push_back(11);

    cout<<"Original vector: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    // to rotate the vector or array
    cout<<"After rotated "<<"\n";
    rotate(v.begin(), v.begin() + 1, v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<"After sorted "<<"\n";
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";



    cout<<"Searching of 9 is true=1 false=0"<<"\n";
    cout<<binary_search(v.begin(),v.end(),9)<<"\n"; // it returns hai ki nahi 1 or 0

    cout<<"Lower bound of 7"<<"\n";
    cout<<lower_bound(v.begin(),v.end(),7)-v.begin()<<"\n"; // it finds the lowest value in the range that is greater than or equal to the given value.
    
    cout<<"Upper bound of 1"<<"\n";
    cout<<upper_bound(v.begin(),v.end(),1)-v.begin()<<"\n"; // it finds the highest value in the range that is strictly greater than the given value.


    int a=3;
    int b= 9;
    cout<<"a is : "<<a<<" "<<"b is : "<<b<<"\n";
    cout<<"The maximum from a and b is ->"<<max(a,b)<<"\n";
    cout<<"The minimum from a and b is -> "<<min(a,b)<<"\n";

    // string bolo = "abcd";
    // cout<<"The reverse string is "<<reverse(bolo.begin(),bolo.end())<<"\n";

    return 0;
}