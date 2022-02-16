//today i wrote efficient code for  finding width of binary tree.
#include <iostream>
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
int count = 1;
int countnode(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    if (root->right != 0)
    {
        count += 2;
    }
    else if (root->left != 0)
    {
        count += 1;
    }

    int t = countnode(root->right->right);
    int k = countnode(root->left->left);
    return count;
}
int main()
{

    node *root = new node(11);
    root->left = new node(9);
    root->left->left = new node(8);
    root->left->right = new node(10);
    root->right = new node(30);
    //root->right = new node(40);

    return 0;
}