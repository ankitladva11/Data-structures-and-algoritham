//Today i wrote efficient code for INSERT function of binary search tree.

#include <iostream>
#include <queue>

using namespace std;
int res = 0;
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
node *insertt(node *root, int k)
{
    if (root == 0)
    {
        return new node(k);
    }
    if (root->key == k)
    {
        return root;
    }
    if (root->key > k)
    {
        root->left = insertt(root->left, k);
    }
    else if (root->key < k)
    {
        root->right = insertt(root->right, k);
    }
}

void printlevel(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    while (q.empty() == 0)
    {
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

    node *root = new node(11);
    root->left = new node(9);
    root->left->left = new node(8);
    root->left->right = new node(10);
    root->right = new node(30);
    root->right = new node(40);
    insertt(root, 50);
    printlevel(root);

    return 0;
}