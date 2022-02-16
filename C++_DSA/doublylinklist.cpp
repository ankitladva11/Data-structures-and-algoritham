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
void recursion(node *head)
{
    //node *curr = head;
        cout << (head->data) << endl;
    if (head = NULL)
    {
        return;
    }
    
    
    // cout << "hii" << endl;
    recursion(head->next);

    return;
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
temp1->prevv=head;
temp1->next=temp2;
temp2->prevv=temp1;
    recursion(head);

    return 0;
}