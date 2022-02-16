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
    if (head = NULL)
    {
        return;
    }
    
        cout << (head->data) << endl;
    
    // cout << "hii" << endl;
    recursion(head->next);

    return;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    recursion(head);

    return 0;
}