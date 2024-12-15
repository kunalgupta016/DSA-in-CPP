#include <iostream>
using namespace std;

class customer{
    string name;
    int balance , acc_number;
    public:
        customer(string n,int b , int  a){
            name = n;
            balance = b;
            acc_number = a;
        }
        void deposit(int acc ,  int amount){
            if(amount>0){
                balance += amount;
                cout<<amount<<"is credited successfully in this "<<acc<<endl;

            }
            else{
                throw "Amount should be greater than 0 ";
            }
        }

        void withdrawl(int acc , int amount){
            if(amount>0 && amount<=balance){
                balance -= amount;
                cout<<amount<<"is debited successfully from this "<<acc<<endl;
            }
            else{
                throw "Insufficient balance or amount should be greater than 0 ";
            }
        }
};


int main() {

    customer c1("Kunal" , 1000 , 500095038);
    
    try{
    c1.deposit(500095038, 500);
    c1.withdrawl(500095038, 200);
    c1.withdrawl(500095038 , 2000);
    }

    catch(const runtime_error &e){
        cout<<"Exception: "<<e.what()<<endl;
    }
    catch(const bad_alloc &e){
        cout<<"Exception: "<<e.what()<<endl;
    }
    catch(const char *e){
        cout<<"Exception: "<<e<<endl;
    }
    catch(...){
        cout<<"Exception: "<<endl;
    }
    return 0;
}