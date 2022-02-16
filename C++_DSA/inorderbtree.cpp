#include <iostream>
using namespace std;
int l = 0, r = 0;
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
void inorder(node *root)
{
    if (root != 0)
    {
        inorder(root->left);
        cout << root->key << endl;
        inorder(root->right);
    }
}

int height2(node *root)
{
    while (root != 0)
    {
        l++;
        root = root->left;
    }

    while (root != 0)
    {
        r++;
        root = root->right;
    }
    int d;
    d = max(l, r);
    return d;
}
 
void reclevel(node *root, int k)
{

    // if (root != 0)
    // {
    //     l++;
    //        if (l == k)
    //     {
    //         cout << root->key << endl;
    //     }
    //     reclevel(root->left,k);

    // }

    // if (root != 0)
    // {
    //     r++;
    //     if (r == k)
    //     {
    //         cout << root->key << endl;
    //     }

    //     reclevel(root->right,k);
    // }

    if (!root)
        return;

    if (k == 0)
    {
        cout << root->key << " ";
        return;
    }

    if (root->left)
    {
        reclevel(root->left, k-1);
    }
    if (root->right)
    {
        reclevel(root->right, k-1);
    }
}

int height(node *root)
{
    if (root==NULL)
    {
        return 0;
    }
 return (max(height(root->left),height(root->right))+1);
}
int main()
{
    node *root = new node(10);
    root->left = new node(30);
    root->left->left = new node(20);
    root->left->left->left = new node(200);

    root->right = new node(40);
    root->right->right = new node(80);

   int y= height(root);
   cout<<y<<endl;
for (int i = y; i >=0; i--)
{
    reclevel(root,i);
    /* code */

}

    return 0;
}