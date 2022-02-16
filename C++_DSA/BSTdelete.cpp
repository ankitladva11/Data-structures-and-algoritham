//Today i wrote efficient code for DELETE function of binary search tree.

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

node *getsuccesor(node *curr)
{
    curr = curr->right;
    while (curr != 0 && curr->left != 0)
    {
        curr = curr->left;
    }
    return curr;
}
node *delnode(node *root, int k)
{
    node *curr = root;
    if (root == 0)
    {
        return root;
    }
    if (root->key > k)
    {
        root->left = delnode(root->left, k);
    }
    else if (root->key < k)
    {
        root->right = delnode(root->right, k);
    }
    else
    {
        if (curr->left == 0)
        {
            node *temp = curr->right;
            delete curr;
            return temp;
        }
        else if (curr->right == 0)
        {
            node *temp = curr->left;
            delete curr;
            return temp;
        }

        else
        {
            node *succ = getsuccesor(curr);
            root->key = succ->key;
            root->right = delnode(root->right, succ->key);
        }
    }
    return root;
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
    delnode(root, 11);
    printlevel(root);

    return 0;
}