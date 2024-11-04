#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int d){
            this->data = d;
            this->next = NULL;
        }

};

class stack{
    public:
        node* head;
        stack(){
            this->head = NULL;
        }

        bool isEmpty(){
            return head == NULL;
        }

        void push(int ele){
            node* newnode = new  node(ele);

            if(!newnode){
                cout<<"Stack overflow"<<endl;
                return;
            }

            newnode->next = head;
            head  = newnode;
        }

        void pop(){
            if(this->isEmpty()){
                cout<<"Underflow"<<endl;
                return;
            }
            node* temp  = head;
            head = head->next;
            delete temp;
        }

        int peek(){
            if(!isEmpty())
                return head->data;
            else{
                return -1;
            }
        }

        void print(){
            node* temp  = head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp  = temp->next;
            }cout<<endl;
        }



};


int main() {
    stack st;
    st.push(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;
    st.print();
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
    
}
