//today i wrote efficient code for printing level wise element by line with time complexity O(n)
#include <iostream>
#include <queue>
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
void printlevel(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (q.size() > 1)
    {
        if (q.front() == NULL)
        {
            q.push(NULL);
            cout << endl;
            q.pop();
        }

        node *curr = q.front();
        cout << curr->key << " ";

        q.pop();
        if (curr->left != 0)
            q.push(curr->left);

        if (curr->right != 0)
            q.push(curr->right);
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);

    root->right = new node(40);
    root->right->right = new node(80);
    printlevel(root);

    return 0;
}