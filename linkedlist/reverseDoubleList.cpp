#include <iostream>
using namespace std;

class node{
    public:
        int val;
        node* next;
        node* pre;
        node(int d){
            this->val = d;
            this->next = NULL;
            this->pre = NULL;
        }
};

void insert(node*head , int data){
    node* newnode = new node(data);
    newnode->next  = head;
    head = newnode;
    newnode->pre = NULL;
}

node* reverse(node* head){

    if(head==NULL || head->next==NULL){
        return head;
    }    
    node* ch = reverse(head->next);
    head->pre = ch;
    ch->pre = NULL;
    head->next->next = head;
    head->next = NULL;
    return ch;
}

void print(node*head){
        node* temp  = head;
        while(temp!=NULL){
            cout<<temp->val<<endl;
            temp = temp->next;
        }
        cout<<endl;

}

int main() {
    
    node* head = NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    print(head);
    reverse(head);
    print(head);




    return 0;
}