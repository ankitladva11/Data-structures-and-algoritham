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
class stacklinklist
{
private:
    
public:
    node *push(node *head, int a)
    {

        node *curr = head;
        while ((curr->next) != 0)
        {
            curr = curr->next;
        }
        node *temp = new node(x);
        curr->next = temp;
        temp->next = 0;
        return head;
    }
    
bool isempty(node *head)
{
    return (head==null);
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

    node *pop(node *head, int a)
    {

        node *curr = head;
        node *curr2 = head;

        while ((curr->next) != 0)
        {
            curr2 = curr;
            curr = curr->next;
        }
        delete curr;
        curr2->next = 0;
        // node *temp = new node(x);
        // curr->next = temp;
        // temp->next = 0;
        return;
    }
    stacklinklist(/* args */);
    ~stacklinklist();
};

stacklinklist::stacklinklist(/* args */)
{
}

stacklinklist::~stacklinklist()
{
}

int main()
{
    stacklinklist obj;
    obj.push(2);

    obj.pop();
   bool a= obj.isempty(obj);
   cout<<a<<endl; 
    
    return 0;
}