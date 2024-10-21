#include <iostream>
using namespace std;

class node
{   
    public:
    int value;
    node *next;
    node(int d)
    {
        this->value = d;
        this->next = NULL;
    }
};

void insert(node* &head, int data)
{
    
    node *newnode = new node(data);
    newnode->next = head;
    head = newnode;
}

bool isCircular(node* head)
{
    if (head == NULL)
    {
        return true;
    }
    
    node* temp  = (head)->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;


}

void print(node* &head){
    if(head==NULL){
        cout<<"Empty"<<endl;
    }
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node *detectLoop(node *head)
{
    if ((head) == NULL)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << " IS JAGH PAR HAI -> " << slow->value << endl;
            return slow;
        }
    }

    return NULL;
}

node* getStartingNOde(node* head){
    if(head==NULL){
        return NULL;
    }
    node* intersection = detectLoop(head);
    node* slow = head;

    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(node* head){
    if(head==NULL){
        return;
    }

    node* starting = getStartingNOde(head);
    node* temp  =starting;

    while(temp->next !=starting){
        temp = temp->next;
    }

    temp->next = NULL;
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    insert(head , 50);
    insert(head , 20);
    insert(head , 30);
    insert(head , 40);
    print(head);
    head->next->next->next->next->next = head->next;
    // if(isCircular(head)){
    //     cout<<"GOLL GOLL HAI BHAI"<<endl;
    // }
    // else{
    //     cout<<"GOLL GOLL NAHI HAI BHAI"<<endl;
    // }
    
    detectLoop(head);
    cout<<getStartingNOde(head)->value<<endl;
    removeLoop(head);
    print(head);
    return 0;
}