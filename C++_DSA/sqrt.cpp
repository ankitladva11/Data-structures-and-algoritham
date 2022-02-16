#include<iostream>
using namespace std;
int sqrt(int num)
{   int i=1;
    while ((i*i)<=num)
    {
        if ((i*i)==num)
        {
            return i;
        }
        i=i+1;
    }
    return i-1;
    
}
int main ()
{
    cout<<sqrt(16)<<endl;
// cout<<<<endl;
// cin>>;
return 0;
}