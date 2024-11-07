#include <iostream>
#include <stack>
using namespace std;
int main() {
    
    int arr[] = {2,1,4,3};
    stack<int>s;
    int ans[4];
    s.push(-1);
    int n = 4;
    for(int i = n-1 ; i>=0 ; i--){
        int crr = arr[i];
        while(s.top()>crr){
            s.pop();
         }
        ans[i] = s.top();
        s.push(crr);
    }
    
    for(int i = 0 ; i<n ; i++){
        cout<<ans[i]<<endl;
    }


    return 0;
}