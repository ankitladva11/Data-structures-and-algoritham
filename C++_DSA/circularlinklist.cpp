#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
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
        return temp;
    }
    while ((curr->next) != head)
    {
        curr = curr->next;
    }

    temp->next = head;
    curr->next = temp;
    return temp;
}
void swap(node *node1, node *node2)
{
    node *temp = new node(node1->data);
    // temp->data=node1->data;
    node1->data = node2->data;
    node2->data = temp->data;
    return;
}

node *insertend(node *head, int x)
{
    node *temp = new node(x);
    node *curr = head;
    temp->next = curr->next;
    head->next = temp;
    swap(head, temp);
    return temp;
}

node *delethead(node *head)
{
    node *curr = head;
    node *curr22 = head;
    curr22 = curr22->next;

    curr = curr->next;

    if (head == 0 || head->next == 0)
    {
        //node *curr =;
        delete head;

        return 0;
    }
    while ((curr->next) != head)
    {
        curr = curr->next;
    }
    curr->next = curr22;
    delete head;
    node *tp = head->next;
    return curr22;
}

node *deletkth(node *head, int k)
{
    node *curr = head;
    node *currd = curr;
    node *currdp = curr;


    int count = 1;
    if (count == k)
    {
        delete head;
        return 0;
    }

    while (count < k)
    {
        currd = curr;
        curr->next = curr;
        curr->next=currdp;
        count++;
    }
    delete curr;
    currd->next = currdp;
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head;
    head = insertbeg(head, 99);
    head = insertend(head, 100);
    head = delethead(head);
    head = deletkth(head, 3);

    printf(head);

    return 0;
}