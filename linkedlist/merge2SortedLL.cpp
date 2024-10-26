#include <iostream>
using namespace std;

class node{
    public:
        int val;
        node* next;
        node(int d){
            this->val  =d;
            this->next  =NULL;
        }
};

void insert(node*&head,int d){
    node* newnode = new node(d);
    newnode->next = head;
    head = newnode;
}

void print(node*&head){
    if(head==NULL){
        cout<<"List khali h yr"<<endl;
        return;
    }
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp =  temp->next;
    }
    cout<<endl;

}


// void solve(node*&f,node*&s){
//     node* crr1 = f;
//     node* crr2 = s;
//     node* next1 = crr1->next;
//     node* next2 = crr2->next;

//     while(next1!=NULL && crr2!=NULL){
//         if((crr1->val<=crr2->val)&& (crr2->val>=crr1->next->val)){
//             crr1->next = crr2;
//             crr2->next = next1;
//             crr1 = crr2;
//             crr2 = next2;
//         }
//     }
// }


node* solve(node*&f,node*&s){
    if(f==NULL){
        return s;
    }
    if(s==NULL){
        return f;
    }
    node* result  = NULL;
    if(f->val <=s->val){
        result = f;
        result->next = solve(f->next,s);
    }
    else{
        result = s;
        result->next = solve(f,s->next);
    }
    return result;
}




int main() {

    node* head = new node(4);
    insert(head,3);
    insert(head,1);
    print(head);
    node* head1 = new node(6);
    insert(head1,5);
    insert(head1,4);
    insert(head1,2);
    print(head1);
    head = solve(head,head1);
    print(head);



    return 0;
}