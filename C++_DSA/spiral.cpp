//today i wrote efficient code for printing spiral form of binary tree. 
#include <iostream>
#include <queue>
#include <stack>

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
void printspiral(node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    stack<int> s;
    bool reverse = false;

    while (q.size() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();
            if (reverse)
            {
                s.push(curr->key);
            }
            else
            {
                cout << curr->key << " ";
            }

            if (curr->left != 0)
                q.push(curr->left);

            if (curr->right != 0)
                q.push(curr->right);
        }
        if (reverse)
        {
            while (s.empty() == false)
            {

                cout << s.top() << " ";
                s.pop();
            }
        }
        reverse = !reverse;
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);

    root->right = new node(40);
    root->right->right = new node(80);
    printspiral(root);

    return 0;
}