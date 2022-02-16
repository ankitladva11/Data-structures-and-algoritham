//Today i wrote efficient code for count node in complete binary tree with time complexity (log(n)*log(h)).
#include <iostream>
#include <cmath>

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
    int lh = 0, rh = 0;
    node *curr = root;
    while (curr != 0)
    {
        lh++;
        curr = curr->left;
    }
    curr = root;
    while (curr != 0)
    {
        lh++;
        curr = curr->left;
    }
    if (lh == rh)
    {
        return pow(2, lh);
    }
    else
    {
        return 1 + countnode(root->left) + countnode(root->right);
    }
}
int main()
{

    node *root = new node(11);
    root->left = new node(9);
    root->left->left = new node(8);
    root->left->right = new node(10);
    root->right = new node(30);

    cout << countnode(root) << endl;

    return 0;
}