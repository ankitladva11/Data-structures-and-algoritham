//today i wrote efficient code for finding count for burnning tree by the particular leaf.
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

int burntree(node *root, int leaf, int &dist)
{

    if (root == NULL)
    {
        return 0;
    }
    if (root->key == leaf)
    {
        dist = 0;
        return 1;
    }
    int ldist = -1;
    int rdist = -1;
    int lh = burntree(root->left, leaf, ldist);
   int  rh = burntree(root->right, leaf, rdist);
    if (ldist != -1)
    {
        dist = 1 + ldist;
        res = max(res, dist + rdist);
    }
    else if (rdist != -1)
    {
        dist = 1 + rdist;
        res = max(res, dist + ldist);
    }
    return max(lh, rh) + 1;
}
int main()
{

    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);

    root->right = new node(40);
    root->right->right = new node(80);
    int dist = 0;
    cout << burntree(root, 40, dist) << endl;
    return 0;
}