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
node *insertnod(node *head, int x, int pos)
{
    node *temp = new node(x);
    if (pos > (5))
    {
        cout << " remain same" << endl;
        return head;
    }
    node *curr = head;
    for (int i = 0; i < pos - 2; i++)
    {
        curr = curr->next;
    }
    node *dup;
    dup = curr->next->next;
    curr->next = temp;
    temp->next = dup;
    return head;
}
int count(node *head)
{
    if (head == 0)
    {
        return -1;
    }
    node *curr = head;
    int count = 1;
    while (curr->next != 0)
    {
        curr = curr->next;
        count++;
    }
    return (count + 1);
}
int search(node *head, int x)
{
    if (head == 0)
    {
        return -1;
    }
    node *curr = head;
    int c = count(head);
    for (int i = 1; i < c; i++)
    {
        if (x == curr->data)
        {
            return 1;
        }

        curr = curr->next;
    }
    return -1;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head = insertnod(head, 33, 2);
cout<<search(head, 33);

    // recursion(head);
   // cout << count(head) << endl;
    return 0;
}