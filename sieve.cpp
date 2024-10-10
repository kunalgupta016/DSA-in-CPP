#include <iostream>
using namespace std;

void primrSieve(int val){
    int prime[100]={0};
    for(int i=2 ;i<=val ; i++){
        if(prime[i]==0){
            for(int j=i*i ; j<=val ; j=j+i){
                prime[j]=1;
            }
        }
    }

    while()
}


int main() {
    
    int primeSieve(40);





    return 0;
}