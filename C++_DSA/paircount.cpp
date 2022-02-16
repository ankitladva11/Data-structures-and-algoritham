#include <iostream>
using namespace std;
int paircount(int aee[], int x, int n)
{
    int low = 0; 
    int high = n - 1;
    int count = 0;
    while (low < high)
    {
        if ((aee[low] + aee[high]) < x)
        {
            // count++;
            // low++;
            return aee[low] + aee[high];
        }
        else if ((aee[low] + aee[high])> x)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return -1;
}
int tiplet(int aee[],int t,int n)
{
for (int i = 0; i < n; i++)
{
    int aee[8]={1,5,6,77,433,444,445,446};

    paircount(aee,x,8);
    
    
}

    int low = 0; 
    int high = n - 1;
    int mid=(low+high)/2;
    int count = 0;
    while (low < high)
    {
        if ((aee[low] + aee[high]) == x)
        {
            count++;
            low++;
        }
        else if ((aee[low] + aee[high])> x)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    


}
int main()
{   cout<<"hii"<<endl;
    int aee[8]={1,5,6,77,433,444,445,446};
   cout<<paircount(aee,78,8)<<endl;
    return 0;
}