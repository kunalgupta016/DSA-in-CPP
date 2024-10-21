#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int d)
    {
        this->val = d;
        this->next = NULL;
    }
};

void insert(node *&head, int ele, int d)
{
    if (head == NULL)
    {
        node *newnode = new node(d);
        head = newnode;
        newnode->next = newnode;
    }
    else
    {
        node *crr = head;
        while (crr->val != ele)
        {
            crr = crr->next;
        }

        node *newnode = new node(d);
        newnode->next = crr->next;
        crr->next = newnode;
    }
}

void print(node *head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "KHALI HAI BHAI" << endl;
    }
    else
    {
        do
        {
            cout << head->val << " ";
            head = head->next;
        } while (head != temp);
    }
}

int main()
{

    node *head = NULL;
    insert(head, 5, 7);

    insert(head, 7, 9);

    insert(head, 5, 6);

    insert(head, 9, 10);

    insert(head, 3, 4);
    print(head);

    return 0;
}