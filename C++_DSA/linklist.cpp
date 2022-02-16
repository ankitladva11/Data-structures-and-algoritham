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
    while (curr != NULL)
    {
        cout << (curr->data) << endl;
        curr = curr->next;
    }
    return;
}

node *insertbegn(node *start, int x)
{
    node *temp = new node(x);
    temp->next = start;
    return temp;
}

int count(node *head)
{
    int count = 0;
    node *curr = head;

    if (head == 0)
    {
        return count;
    }
    count = 1;
    while ((curr->next) != 0)
    {
        curr = curr->next;
        count++;
    }
    return count;
}

void middlelement(node *head)
{
    int n;
    node *curr = head;

    if (head == 0)
    {
    }
    if (head->next == 0)
    {
        cout << head->data;
    }

    n = count(head);
    int xtime = (n / 2);
    while (xtime != 0)
    {
        curr = curr->next;
        xtime--;
    }

    cout << curr->data << endl;
    return;
}
//effe=effecient
void effemiddlelement(node *head)
{
    int n;
    node *slow = head;
    node *fast = head;

    if (head == 0)
    {
    }
    if (head->next == 0)
    {
        cout << head->data;
    }

    n = count(head);
    if ((n % 2) == 0)
    {
        while (fast != 0)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->data << endl;
    }
    else
    {

        while (fast->next != 0)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->data << endl;
    }

    return;
}

void nthnodend(node *head, int k)
{
    int n;
    node *curr = head;

    if (head == 0)
    {
    }
    if (k > n)
    {
        /* code */
    }

    n = count(head);
    int x = n - k;
    while (x != 0)
    {
        curr = curr->next;
        x--;
    }

    cout << curr->data << endl;
    return;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    cout << count(head) << endl;
    //middlelement(head);
    //effemiddlelement(head);
  nthnodend(head,3);
    //printf(head);

    return 0;
}