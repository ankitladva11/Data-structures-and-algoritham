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
        prevv = NULL;

        next = NULL;
    }
};
void recursion(node *head)
{
    //node *curr = head;
    if (head == NULL)
    {
        return;
    }

    cout << (head->data) << endl;
    // cout << "hii" << endl;
    recursion(head->next);
}
void print(node *head)
{
    node *curr = head;
    while (curr != 0)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
    return;
}
node *insertbeg(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    //0while (head!=0)
    {
        head->prevv = temp;
    }

    return temp;
}

node *insertend(node *head, int x)
{
    node *temp = new node(x);
    //temp->next=0;
    node *curr = head;
    if (head == 0)
    {
        return temp;
    }

    while (curr->next != 0)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prevv = curr;

    return head;
}
node *reversedll(node *head)
{
    if (head == 0 || (head->next) == 0)
    {
        return head;
    }
    node *prev = 0;

    node *curr = head;

    while (curr != 0)
    {
        prev = curr->prevv;
        curr->prevv = curr->next;
        curr->next = prev;
        curr=curr->prevv;
    }
  

    return prev->prevv;
}

int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    // head->next->next = new node(30);
    // head->next->next->next = new node(40);
    // head->prevv= new node(10);
    head->next = temp1;
    temp1->prevv = head;
    temp1->next = temp2;
    temp2->prevv = temp1;
    // head = insertbeg(head, 88);
    // head = insertend(head, 44);
    //recursion(head);
    print(head);
    reversedll(head);
    print(head);


    return 0;
}