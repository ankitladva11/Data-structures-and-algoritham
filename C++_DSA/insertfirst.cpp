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

    return;
}
// node *balancee(node *head)
// {
//     //node *curr = head;
//     if (head == NULL)
//     {
//         return NULL;
//     }

//     while ((head->next) != NULL)
//     {
//         head = head->next;
//     }

//     return head;
// }
// node *insertend(node *start, int x)
// {
//     node *dup = start;
//     balancee(start);
//     node *temp = new node(x);
//     if (start == NULL)
//     {
//         temp->next = start;
//         return start;
//     }

//     start->next = temp;
//     //temp->next = NULL;
//     if (dup == NULL)
//     {
//         return temp;
//     }

//     return dup;
// }
node *insertend(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while ((curr->next) != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;

    return head;
}
node *insertbegn(node *start, int x)
{
    node *temp = new node(x);
    temp->next = start;
    return temp;
}

node *insertdelett(node *start)
{
    if (start == NULL)
    {
        return start;
    }
    node *temp = start->next;
    delete start;
    return temp;
}
node *insertdeletend(node *head)
{   node *temp;
    //node *temp = new node(x);
    if (head == NULL)
    {
        return head;
    }
    node *curr = head;
    while ((curr->next) != NULL)
    {   temp=curr;
        curr = curr->next;
    }
    delete curr;
    temp->next=NULL;

    return head;
}

int main()
{
    node *head = NULL;
    // head = insertbegn(head, 5);
    // head = insertbegn(head, 10);
    head = insertend(head, 15);
    head = insertend(head, 20);
    //head=insertdelett(head);
    // head = insertbegn(head, 39);
    head = insertdeletend(head);
    recursion(head);

    //recursion(head);

    return 0;
}