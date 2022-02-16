#include <iostream>
using namespace std;
int peakele(int arr[], int n)
{
    if (arr[0] >= arr[1])
    {
        return arr[0];
    }
    if (arr[n - 1] >= arr[n - 2])
    {
        return arr[n - 1];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
   int arr[5]={4,6,10,33,2};
   cout<<peakele(arr,5)<<endl;

     return 0;
}