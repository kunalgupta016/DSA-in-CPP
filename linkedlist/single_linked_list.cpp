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
    ~node(){
      
    }
};

void insertAtHead(node**head,int d){
    node* newnode = new node(d);
    newnode->next = *head;
    *head = newnode;
}

void insertAtEnd(node**head,int d){
    node* newnode = new node(d);
    if(*head == NULL){
        *head = newnode;
        return ;
    }
    else{
        node* temp  = *head;
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insertAtSP(node**head,int d,int p){
    node* newnode = new node(d);
    if(p==0){
        newnode->next = *head;
        *head = newnode;
        return;
    }
    else{
        node* temp = *head;
        for(int i=0;i<p-1;i++){
            temp = temp->next;
            if(temp == NULL){
                cout<<"Position not found"<<endl;
                return;
            }
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}


void deleteAtHead(node**head){
  if(*head==NULL){
    cout<<"Khali"<<endl;
    return;
  }
  else{
    node* del = *head;
    *head = (*head)->next;
    delete del;
    
  }
}

void deleteAtSP(node**head,int pos){
    
    node* temp;
    node* del = *head;
    
    if(pos==0){
        cout<<"Khali"<<endl;
    }
    if(pos==1){
        deleteAtHead(head);
    }
    else{
        for(int i=0;i<pos-1;i++){
            temp = del;
            del = del->next;
            if(del==NULL){
                cout<<"Galat position hai"<<endl;
                break;
            }

        }
        temp->next = del->next;
        del->next = NULL;
        delete del;
    }
}

void print(node* head){
    node* temp  = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main() {
    node* head = NULL;
    insertAtHead(&head,13);
    insertAtHead(&head,12);
    insertAtEnd(&head,11);
    insertAtEnd(&head,10);
    insertAtSP(&head,9,3);
    print(head);
    cout<<endl;
    // deleteAtHead(&head);
    deleteAtSP(&head,3);
    print(head);
    
    return 0;
}