//Today i wrote efficient code for DELETE function of binary search tree.

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(100);
    pq.push(200);

    pq.push(44);
    pq.push(39);
    cout << pq.size() << endl;
    cout << pq.top() << endl;
    while (pq.empty() == false)
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}