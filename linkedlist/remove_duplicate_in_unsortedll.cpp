#include <iostream>
#include <algorithm>
#include <vector>
#include<map>
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

                                    //? APPROACH 1
/*
void remove(node*&head){

    if(head==NULL){
        return;
    }
    else
    {
        node* temp  = head;
        while(temp!=NULL  && temp->next!=NULL){
            node* crr = temp;
            while(crr->next!=NULL){
                if(temp->val == crr->next->val){
                    node* toDelete = crr->next;
                    crr->next = crr->next->next;
                    delete toDelete;
                }
                else{
                    crr = crr->next;
                }
            }
            temp = temp->next;
        }
    }


}


*/


                                    //? APPROACH 2
/*

node* merge(node*left,node*right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    node* result = NULL;
    if(left->val <= right->val){
        result = left;
        result->next = merge(left->next,right);
    }
    else{
        result = right;
        result->next = merge(left,right->next);
    }
    return result;
}

void splitList(node* head , node* &left , node* &right){
    if(head==NULL || head->next==NULL){
        left = head;
        right = NULL;
        return;
    }
    node* slow = head;
    node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    left = head;
    right  = slow->next;
    slow->next = NULL;
}

node* mergeSort(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* left  = NULL;
    node* right = NULL;
    splitList(head,left,right);
    left = mergeSort(left);
    right = mergeSort(right);
    return merge(left,right);
}

void remove(node*&head){
    // head = mergeSort(head);
    if(head==NULL){
        return;
    }
    else{
        // phle sort kardo 
        
        node* crr = head;
        while(crr!=NULL && crr->next!=NULL){
            if(crr->val == crr->next->val){
                node* todele = crr->next;
                crr->next = crr->next->next;
                delete todele;
                
            }
            else{
                crr = crr->next;
            }
        }       
    }
}

*/

                                            //? APPROACH 3

void remove(node*&head){
    if(head==NULL){
        return;
    }

    map<int,bool>visited;
    node* crr = head;
    node* pre = NULL;
    while(crr!=NULL){

        if(visited[crr->val]==true){
            pre->next = crr->next;
            delete crr;
        }
        else{
            visited[crr->val] = true;
            pre = crr;
        }
        crr = pre->next;

    }

}


int main() {
    
    node* head = new node(2);  // Create the initial linked list
    insert(head, 2);
    insert(head, 2);
    insert(head, 4);
    insert(head, 5);
    insert(head, 2);
    insert(head, 4);

    cout << "Original List: ";
    print(head);

    // head = mergeSort(head);  // Sort the linked list
    // cout << "Sorted List: ";
    // print(head);

    remove(head);  // Remove duplicates from the sorted list
    cout << "List after removing duplicates: ";
    print(head);
}
