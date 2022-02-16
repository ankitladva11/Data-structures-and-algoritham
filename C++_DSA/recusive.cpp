#include <iostream>
using namespace std;
int i = 0;
 void recursiveprint(int arr[10], int n)
{
    if (i == n - 1)
    {
        return;
    }
    cout << arr[i] << endl;
    recursiveprint(arr, n - 1);
}
int main()
{

    return 0;
}