//today i wrote efficient code for printing spiral form of binary tree.
#include <iostream>
#include <queue>
#include <stack>

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
node *lca(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->key == n1 || root->key == n2)
    {
        return root;
    }
    node *lca1 = lca(root->left, n1, n2);
    node *lca2 = lca(root->right, n1, n2);
    if (lca1 != NULL && lca2 != NULL)
    {
        return root;
    }
    if (lca1 != NULL)
    {
        return lca1;
    }
    else
    {
        return lca2;
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->right = new node(50);

    root->right->left = new node(40);

    cout << lca(root, 40, 50)->key << endl;

    return 0;
}