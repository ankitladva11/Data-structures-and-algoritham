#include<iostream>

using namespace std;
int median(int arr1[], int size1, int arr2[], int size2, int ans[])
{
   for(int i=0;i<size1 ;i++)
   {
       ans[i]=arr1[i];
       
   }
   int i=size1-1;
       for(int j=1;j<size2+1 ;i++)
   {
       ans[i+j]=arr2[i];
       
   }
    sort(ans,ans+size1+size2);
    // for (int  i = 0; i < size1+size2 ; i++)
    // {
    //    // cout<<ans[i];
    // }
    
    // for(int j=0; j<ans+size1+size2 ; j++);
    // cout<<ans[j]<<" ";
   int k= (size1+size2);
   if ((k%2==0))
   {
       return((ans[k/2]+ans[((k/2)+1)/2]);
   }
   else
   {
       return (ans[k/2]);
   }
   
}

int main ()
{
    int arr1[6]={1,2,3,4,5,6};
    int arr2[5]={10,11,12,13,14};
    int ans[];

  cout<<median(arr1,6,arr2,5,ans);

// cout<<<<endl;
// cin>>;
return 0;
}