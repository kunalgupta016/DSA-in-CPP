#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
    string str= "((a+b))";
    stack<char> st;
    for(int i = 0 ; i < str.length() ; i++){
        char ch  = str[i];

        if(ch == '(' || ch=='+' || ch == '-' || ch == '*' || ch=='/'){
            st.push(ch);
        }
        else{

            if(ch ==')'){
                
                bool isRedundant = true;
                while(st.top()!='('){
                    char top  = st.top();
                    if(top=='+' || top == '-' || top == '*' || top=='/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                if(isRedundant == true){
                    cout<<"Redundant"<<endl;  
                    exit(0);
                }
                                 
                st.pop();

            }
             

        }
        
    }
    cout<<"Not redundant"<<endl;
   
    
}