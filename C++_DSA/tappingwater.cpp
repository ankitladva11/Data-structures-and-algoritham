#include <iostream>
using namespace std;
int waterb(int arr[], int n)
{
    int z;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            z = i;
        }
    }
    int p = arr[z - 1];
    int q = arr[z + 1];
    if (p == q)
    {
        return q;
    }
    int t = arr[0];
    int x;
    for (int i = 1; i < z; i++)
    {
        if (arr[i] > t)
        {
            t = arr[i];
            x = i;
        }
    }
    int s = arr[q];
    int g;
    for (int i = z + 2; i <= n; i++)
-   {
        if (arr[i] > s)
        {
            s = arr[i];
            g = i;
        }
    }
    int l = min(s, t);
    for (int i = x; i < z; i++)
    {
        if ((l - arr[i]) > 0)
        {
            count = count + (l - arr[i]);
        }
    }
    for (int i = g; i > z; i--)
    {
        if ((l - arr[i]) > 0)
        {
            count = count + (l - arr[i]);
        }
    }
    return (count+l);
}

int main()
{
    int arr[6] = {2, 3, 4, 0, 3, 6};
    cout << waterb(arr, 6);
      int arrt[7] = {2, 3, 3, 0, 1, 2,6};
    cout << waterb(arrt, 7);
    return 0;
}