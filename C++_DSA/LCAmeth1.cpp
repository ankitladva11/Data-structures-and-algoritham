//today i wrote efficient code for printing spiral form of binary tree.
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

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
bool findpath(node *root, vector<node *> &p, int n)
{
    if (root == NULL)
    {
        return false;
    }
    p.push_back(root);
    if (root->key == n)
    {
        return true;
    }
    if (findpath(root->left, p, n) || findpath(root->right, p, n))
    {
        return true;
    }
    p.pop_back();
    return false;
}

node *lca(node *root, int n1, int n2)
{
    vector<node *> path1, path2;
    if (findpath(root->left, path1, n1) == false || findpath(root->right, path2, n2) == false)
    {
        return NULL;
    }
    for (int i = 0; i < path1.size() - 1 && i < path2.size() - 1; i++)
    {
        if (path1[i + 1] != path2[i + 1])
        {
            return path1[i];
        }
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