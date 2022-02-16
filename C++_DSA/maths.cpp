#include<iostream>
using namespace std;
int main ()
{
    int arr[10]={3,4,3,4,3,4,3,4,3,4};
    int k=arr[0];
    for (int  i = 1; i < 10; i++)
    {
       k=k^arr[i]; /* code */
    }
    cout<<k<<endl;
    
return 0;
}