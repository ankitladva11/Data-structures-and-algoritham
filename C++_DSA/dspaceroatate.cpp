#include <iostream>
using namespace std;
void swap(int n, int d)
{
    int t = n;
    n = d;
    d = t;
    return;
}

void dspace(int arr[], int n, int d)
{
    if (d == (n - 2))
    {
        int k = arr[0];
        for (int i = 1; i < (n - 1); i++)
        {
            int t = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = t;
        }
        k = arr[n - 1];
    }
    else
    {
        
    }
}
int main()
{

    cout < < < < endl;
    cin >> ;
    return 0;
}