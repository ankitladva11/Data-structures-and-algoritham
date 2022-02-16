//Today i wrote efficient code for CEILING function of binary search tree.

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

node *ceiling(node *root, int x)
{
    node *res = NULL;
    if (root == 0)
    {
        return root;
    }
    while (root != 0)
    {
        if (root->key == x)
        {
            return root;
        }
        if (root->key < x)
        {
            root = root->right;
        }
        else
        {
            res = root;
            root = root->left;
        }
    }

    return res;
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

    root->right = new node(40);
    root->right->left = new node(30);
    // ceiling(root, 35);
    cout << ceiling(root, 16)->key << endl;

    return 0;
}