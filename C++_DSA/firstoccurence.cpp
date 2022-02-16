#include <iostream>
using namespace std;
int recurionfirsto(int arr[], int low, int high, int x)
{   int count=0;
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        while (arr[mid] == arr[mid - 1])
        {
            mid = mid - 1;
            // if (mid == 0)
            // {
            //     return 0;
            // }
               // count++;

            // cout << "hiii" << endl;
            //cout<<"hiii"<<endl;
        }
          while (arr[mid] == arr[mid + 1])
        {
            mid = mid + 1;
            // if (mid == 0)
            // {
            //     return 0;
            // }
                count++;

            // cout << "hiii" << endl;
            //cout<<"hiii"<<endl;
        }

        //  cout << "hiii" << endl;
        return count;
    }
    else if (arr[mid] > x)
    {
        recurionfirsto(arr, low, mid - 1, x);
    }
    else if (arr[mid] < x)
    {
        //recurionfirsto(arr, low, mid - 1, x);
        recurionfirsto(arr, mid + 1, high, x);
    }
    else
    {
        return -1;
    }
    // cout << "hiii" << endl;
}
int main()
{
    int arr[8] = {6, 6, 6, 6, 6, 7,8,8};
    cout << recurionfirsto(arr, 0, 7, 6);

    // cout<<<<endl;
    // cin>>;
    return 0;
}