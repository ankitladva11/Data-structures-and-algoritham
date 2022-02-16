//Today i wrote efficient code for search function of binary search tree.
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
bool searchh(node *root, int k)
{
    if (root == 0)
    {
        return false;
    }
    if (root->key == k)
    {
        return true;
    }
    if (root->key > k)
    {
        return searchh(root->left, k);
    }
    else if (root->key < k)
    {
        return searchh(root->right, k);
    }
}
int main()
{

    node *root = new node(11);
    root->left = new node(9);
    root->left->left = new node(8);
    root->left->right = new node(10);
    root->right = new node(30);

    cout << searchh(root, 30);

    return 0;
}