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
int maxleft = INT_MIN;
int maxleft(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    maxleft = root->key;
    return max(maxleft, maxleft(root->left));
}
int minleft(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    minleft = root->key;
    return max(minleft,min);
}

int main()
{

    node *root = new node(11);
    root->left = new node(9);
    root->left->left = new node(8);
    root->left->right = new node(10);
    root->right = new node(30);
    root->right = new node(40);

    return 0;
}