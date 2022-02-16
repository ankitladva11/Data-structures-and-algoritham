#include <iostream>
using namespace std;
int repeanting(int arr[], int n)
{
    int res = 0;
    int count = 0;
    int j = n;
    int i;
    for (int i = 0; i < j; i++)
    {
        if (arr[i] == (n - 2))
        {
            count++;
        }
        else if (count > 1)
        {

cout<<"cooc"<<endl;            return i;
        }

        else
        {

            n--;
        }
    }
    for (int k = 0; k < j; k++)
    {
        int pp = 0;
        if (arr[i] == arr[k])
        {
            count++;
        }
    }
    return count;
}
int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 3, 3};
    cout << repeanting(arr, 7) << endl;

    return 0;
}