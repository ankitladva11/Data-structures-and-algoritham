#include <iostream>
using namespace std;
void frequency(int are[], int n)
{
    int k = are[0];
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (k == are[i])
        {
            count++;
        }
        else
        {
            cout << are[i-1] << "  " << count << endl;
            k = are[i];
            count = 1;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<are[i]<<endl;
    }
    
    return;
}
int main()
{
    int arr[7] = {1, 1, 1, 2, 2, 2, 3};
    frequency(arr, 7);

    return 0;
}