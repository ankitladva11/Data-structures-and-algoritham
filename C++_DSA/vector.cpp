#include <iostream>
#include <vector>
using namespace std;
int findinfinite(int num, int n, int arr[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < num)
        {
            count++;
        }
    }
    if (arr[count] == num)
    {
        return count;
    }
    else
    {   
        return -1;
    }
}
int main()
{
        int aee[10]={2,3,4,5,6,6,6,7,8,90};
        cout<<findinfinite(99999,10,aee)<<endl;
    // cout<<<<endl;
    // cin>>;
    return 0;
}