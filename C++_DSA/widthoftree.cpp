//today i wrote efficient code for  finding width of binary tree.
#include <iostream>
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
    return 1 + max(height(root->left), height(root->right));
}

int width(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = width(root->left);
    int d3 = width(root->right);
    return max(d1, max(d2, d3));
}
int main()
{

    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);

    root->right = new node(40);
    root->right->right = new node(80);
    cout << width(root) << endl;
    return 0;
}