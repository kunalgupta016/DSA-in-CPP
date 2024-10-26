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

void insert(node*&head,int d){
    node* newnode = new node(d);
    newnode->next = head;
    head = newnode;
}

void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

void insertTail(node*&tail,node* crr){
    tail->next = crr;
    tail = crr;
}

node* sort1(node*&head){

    // teen ll bna li
    node* zeroHead = new node(-1);
    node* ZeroTail  = zeroHead;
    node* oneHead = new node(-1);
    node* OneTail = oneHead;
    node* twoHead = new node(-1);
    node* TwoTail = twoHead;



    node* temp  = head;
    while(temp!=NULL){
        if(temp->data == 0){
            insertTail(ZeroTail,temp);
        }
        else if(temp->data == 1){
            insertTail(OneTail,temp);
        }
        else if(temp->data == 2){
            insertTail(TwoTail,temp);
        }
        temp = temp->next;
    }

    // ab merge karna hai 
    if(oneHead->next!=NULL){
        ZeroTail->next = oneHead->next;
    }
    else{
        ZeroTail->next = twoHead->next;
    }

    OneTail->next = twoHead->next;
    TwoTail->next = NULL;
    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return head;

}

int main() {
    node* head = new node(0);
    insert(head,1);
    insert(head,2);
    insert(head,0);
    insert(head,2);
    print(head);
    head = sort1(head);
    print(head);
    return 0;
}