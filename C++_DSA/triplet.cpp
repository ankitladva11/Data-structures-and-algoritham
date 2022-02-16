#include<iostream>
using namespace std;
void triplet(int n,int arr[],int x)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = i+1; j >i; j++)
        {
            for (int k = j+1; k>j; k++)
            {
                if ((arr[i]+arr[j]+arr[k])==x)
                {
                    cout<<arr[i]<<" "<<arr[j]<<"  "<<arr[k]<<endl;
                }
                
            }
            
        }
        
    }
    
    return ;

}
int main ()
{
    int aee[8]={1,5,6,77,433,444,445,446};
    cout<<triplet(8,aee,451);

// cout<<<<endl;
// cin>>;
return 0;
}