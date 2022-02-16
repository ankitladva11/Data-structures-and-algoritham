#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prevv;

    node(int x)
    {
        data = x;
        prevv=NULL;
        
        next = NULL;
    }
};

void printf(node *head)
{
    node *curr = head;
    if (curr == 0)
    {
        return;
    }
    if ((curr->next) == 0)
    {
        cout << (curr->data);
        return;
    }

    cout << (curr->data) << endl;
    curr = curr->next;
    while (curr != head)
    {
        cout << (curr->data) << endl;
        curr = curr->next;
    }
    return;
}

node *insertbeg(node *head, int x)
{
    node *temp = new node(x);
    node *curr = head;
    curr = curr->next;

    if (head == 0)
    {
        temp->next = temp;
        temp->prevv= temp;

        return temp;
    }
     if (head->next == head)
    {   

        temp->next = head;
        head->prevv=temp;
        head->next=temp;
        temp->prevv= head;

        return temp;
    }
    while ((curr->next) != head)
    {
        curr = curr->next;
    }

    temp->next = head;
    head->prevv=temp;
    temp->prevv=curr;
    
    curr->next = temp;
    return temp;
}

int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    // head->next->next = new node(30);
    // head->next->next->next = new node(40);
   // head->prevv= new node(10);
head->next=temp1;
head->prevv=temp2;

temp1->prevv=head;
temp1->next=temp2;
temp2->prevv=temp1;
temp2->next=head;
head=insertbeg(head,99);

    printf(head);

    return 0;
}