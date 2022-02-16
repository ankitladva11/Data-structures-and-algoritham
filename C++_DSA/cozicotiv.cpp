#include <iostream>
using namespace std;
int onenumber(int arr[], int n)
{

    int k = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            k = max(k, count);
            count = 0;
        }
    }
    return k;
}
int main()
{
    int arrr[10] = {0, 1, 0, 1, 1, 1, 0, 1, 1, 0};
    cout << onenumber(arrr, 10) << endl;
    return 0;
}