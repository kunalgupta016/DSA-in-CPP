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

void insertAtTail(node*& head , node*& tail , int val){
    node* newnode = new node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}

void print(node* &head){
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


node* getmiddle(node* head){
    node* slow = head;
    node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;

}

node* reverse(node* head){
    node* crr = head;
    node* next = NULL;
    node* prev = NULL;
    while(crr!=NULL){
        next = crr->next;
        crr->next = prev;
        prev = crr;
        crr = next;
    }
    return prev;
}



node* add(node*&head1 ,node*&head2){
    // step1 -> reverse ll 
    
    head1  = reverse(head1);
    head2  = reverse(head2);

    // step2 -> add from left

    node* ansHead = NULL;
    node* ansTail = NULL;
    int carry = 0;
    while(head1!=NULL || head2!=NULL || carry!=0){
        int val1 = 0 ;
        if(head1!=NULL){
            val1 = head1->val;
        } 
        int val2 = 0 ;
        if(head2!=NULL){
            val2 = head2->val;
        }
        int sum = val1 + val2 + carry ;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        if(head1!=NULL){
            head1 = head1->next;
        }
        if(head2!=NULL){
            head2 = head2->next;
        }
    }

    // step3 -> reverse ans;

    node* ans =  reverse(ansHead);
    return ans;

}


int main() {
    
    node* head = new node(4);
    insert(head,3);
    print(head);
    node* head1 = new node(0);
    insert(head1,3);
    insert(head1,2);
    print(head1);
    head = add(head,head1);
    print(head);


    return 0;
}