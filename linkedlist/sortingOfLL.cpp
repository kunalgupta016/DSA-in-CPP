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

node* merge(node*left , node*right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }

    node* result = NULL;
    if(left->val<=right->val){
        result = left;
        result->next = merge(left->next,right);
    }
    else{
        result = right;
        result->next = merge(left,right->next);
    }
    return result;
}

void splitList(node* &head , node* &left , node* &right){
    if(head==NULL || head->next==NULL){
        left = head;
        right = NULL;
        return ;
    }
    
    // 2 pointer approach
        node* slow = head;
        node* fast  =head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
    
    left = head;
    right = slow->next;
    slow->next = NULL;
}

node* mergeSort(node*&head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* left = NULL;
    node* right = NULL;

// do bhago me baatna hai 

    splitList(head,left,right);

// left me sort 
    left = mergeSort(left);
// right me sort
    right = mergeSort(right);

// merge karna hai
    return merge(left,right);
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
    head = mergeSort(head);
    print(head);

    return 0;
}