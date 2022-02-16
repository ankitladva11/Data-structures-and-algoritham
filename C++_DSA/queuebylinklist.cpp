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
struct queuebylin
{
    int size, cap;
    node *front, *rear;
    queuebylin()
    {
        front = null;
        rear = null;
    }

    void enque(int x)
    {
        node *temp = new node(x);
        rear->next = temp;
    }
    void deque()
    {
        cout << arr[size] << endl;
        size--;
        rear = size - 1;
    }
    int getfront()
    {
        return arr[0];
    }
    int getrear()
    {
        // if (size==0)
        // {
        //     return arr[0];
        // }
        // else
        {
            return arr[size - 1];
        }
    }
    bool iffull()
    {
        if (cap == size + 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool isempty()
    {
        if (size == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int sizee()
    {
        return size;
    }
};

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    //cout << count(head) << endl;
    //middlelement(head);
    //effemiddlelement(head);
    // nthnodend(head,1);
    //printf(head);

    return 0;
}