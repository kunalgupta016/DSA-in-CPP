#include <iostream>
using namespace std;

class node{
    public:
        int val;
        node* next;
        node(int d){
            this->val  =d;
            this->next  = NULL;
        }
};

void insert(node* &head ,int d ){

    node* newnode = new node(d);
    newnode->next =  head;
    head = newnode;
}

void print(node* &head){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    node* temp  = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp  = temp->next;

    }cout<<endl;
}

void duplicate(node*&head){
    if(head==NULL){
        return;
    }
    node* crr = head;
    while(crr!=NULL){
        if((crr->next!=NULL) && crr->val==crr->next->val){
            node* next_next = crr->next->next;
            node* toDelete = crr->next;
            delete toDelete;
            crr->next = next_next;
        }
        else{
            crr = crr->next;
        }
    }
}


int main() {
    node* head = new node(0);
    insert(head, 1);
    insert(head, 2);
    insert(head, 2);
    insert(head, 3);
    insert(head, 3);
    insert(head, 4);
    print(head);
    duplicate(head);
    print(head);
    return 0;
}