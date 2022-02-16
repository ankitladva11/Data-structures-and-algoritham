//today i wrote efficient code for checking is binary tree is balanced or not.
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
bool isbalanced1(node *root)
{

    if (root == NULL)
    {
        return 1;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh - rh) <= 1 && isbalanced1(root->left) && isbalanced1(root->right));
}

int isbalanced2(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int lh = isbalanced2(root->left);
    if (lh == -1)
    {
        return -1;
    }
    int rh = isbalanced2(root->right);
    if (rh == -1)
    {
        return -1;
    }
    if (abs(lh - rh) > 1)
    {
        return 1;
    }

    return (max(lh, rh) + 1);
}
int main()
{
    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);
    root->right = new node(40);
    root->right->right = new node(80);
    cout << isbalanced2(root) << endl;

    return 0;
}