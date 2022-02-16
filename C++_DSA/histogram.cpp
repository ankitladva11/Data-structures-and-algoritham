#include <iostream>
#include <vector>
#include <stack>


using namespace std;

void ns(int arr[], int n)
{
    stack <int> s;
    vector <int> temp;

    s.push(arr[n - 1]);
    temp.push_back(-1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() != 0 && s.top() <= arr[i])
        {
            s.pop();
        }
        int ng = (s.empty()) ? (-1) : (s.top());
        temp.push_back(ng);
        s.push(arr[i]);
    }
    for (int i = n-1; i >=0; i--)
    {
        cout <<temp[i]<< endl;
    }

    
    // while (temp.size() != 0)
    // {
    //     int k = temp[0];
    //     temp.pop_back();
    // }
 }

// void ps(int arr[], int n)
// {
//     stack<int> s;
//     stack<int> temp;

//     s.push(arr[n - 1]);
//     temp.push(-1);
//     for (int i = n - 2; i >= 0; i--)
//     {
//         while (s.empty() != 0 && s.top() <= arr[i])
//         {
//             s.pop();
//         }
//         int ng = (s.empty()) ? (-1) : (s.top());
//         temp.push(ng);
//         s.push(arr[i]);
//     }
//     while (temp.empty() != 0)
//     {
//         int k = temp.top();
//         cout << k << endl;
//         temp.pop();
//     }
// }
int main()
{

    int arr[4] = {60, 2, 3, 4};
    ns(arr, 4);

    return 0;
}