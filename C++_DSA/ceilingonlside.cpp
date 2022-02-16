//Today i wrote efficient code for
#include <iostream>
#include <queue>
#include <set>

using namespace std;
void printceiling(int arr[], int n)
{
    set<int> s;
    s.insert(arr[0]);
    for (int i = 1; i < n; i++)
    {
        auto k = s.upper_bound(arr[i]);
        if (*(k))
        {
            cout << (*k) << endl;
        }
        else
        {
            cout << "-1"
                 << " ";
        }
        s.insert(arr[i]);
    }
}
int main()
{
    int arr[] = {44, 5, 4, 333, 2, 5555};
    // printceiling(arr, 6);

    return 0;
}