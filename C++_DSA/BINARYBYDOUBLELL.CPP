//today i wrote two codes for finding maximum width of a binary tree
//one recursive of time complexity o(n*n)
//one using deque of time complexity o(n)

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
node *prev = NULL;
node *treedll(node *root)
{
    if (root == NULL)
        return root;

    node *head = treedll(root->left);
    if (prev == 0)
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev=root;
    treedll(root->right)

    return head;
}

int main()
{
    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);
    root->right = new node(40);
    root->right->right = new node(80);
    cout <<treedll(root)<< endl;

    return 0;
}