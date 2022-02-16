//today i wrote efficient code for checking is child node's sum is equal to parent node.
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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (max(height(root->left), height(root->right)) + 1);
}

bool sumchild(node *root)
{
    if ((root == NULL))
        return 1;
    if ((root->left) == NULL && (root->right) == NULL)
    {
        return 1;
    }

    int a = sumchild(root->left) & sumchild(root->right);
    int b = (root->key) == ((root->left)->key) + ((root->right)->key);
    return (a & b);
}
int main()
{
    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);
    root->right = new node(40);
    root->right->right = new node(80);
    cout << sumchild(root) << endl;

    return 0;
}