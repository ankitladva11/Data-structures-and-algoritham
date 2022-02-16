//today i wrote two codes for finding maximum width of a binary tree 
//one recursive of time complexity o(n*n)
//one using deque of time complexity o(n)

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
int maxwid(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    if (root->left == 0)
    {

        if (root->right == 0)
        {
            return 1;
        }
        return 1;
    }
    return (maxwid(root->left) + maxwid(root->right));
}

int maxwid2(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    queue<node *> q;
    q.push(root);
    int res = 0;
    while (q.empty() == false)
    {
        int count = q.size();
        res = max(res, count);

        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();
 
            if (curr->left)
                q.push(curr->left);

            if (curr->right)
                q.push(curr->right);
        }
    }
    return res;
}
int main()
{
    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);
    root->right = new node(40);
    root->right->right = new node(80);
    cout << maxwid2(root) << endl;

    return 0;
}