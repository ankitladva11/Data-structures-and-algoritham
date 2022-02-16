#include <iostream>
#include <queue>

using namespace std;
void reverserec(queue<int> &sa)
{
    if (sa.size() == 0)
    {
        return;
    }
    int d = sa.front();
    sa.pop();
    reverserec(sa);
    sa.push(d);
    return;
}
int main()
{
    queue<int> a, b;
    a.push(1);
    a.push(22);
    a.push(299);
     reverserec(a);
     
     while ((a.size())!=0)
     {
         cout<<a.front()<<endl;
         a.pop();
     }
     

    return 0;
}