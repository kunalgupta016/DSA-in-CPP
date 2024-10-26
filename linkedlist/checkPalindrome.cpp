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


bool checkpalindrome(node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
// step 1-> find middle
    node* middle = getmiddle(head);
//  step2-> reverse middle ke aage ka part

    node* temp  = middle->next;
    middle->next = reverse(temp);

// compare;
    node* head1 = head;
    node* head2 = middle->next;
    while(head2!=NULL){
        if(head1->val!=head2->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

// step 4-> repeaat step2;

    temp = middle->next;
    middle->next = reverse(temp);

    return true;
}



int main() {
    
    node* head = new node(1);
    insert(head,2);
    insert(head,3);
    insert(head,3);
    insert(head,2);
    insert(head,1);
    print(head);
    if(checkpalindrome(head)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }



    return 0;
}