#include <iostream>
#include <queue>
#include <string>

using namespace std;
void generaten(queue<string> &a, int n)
{

    for (int i = 0; i < n; i++)
    {
        string str = a.front();
        cout << str << endl;
        a.pop();
        a.push(str + "5");
        a.push(str + "6");
    }
    return;
}
int main()
{
    queue<string> a, b;
    int n = 10;
    a.push("5");
    a.push("6");
    generaten(a, 20);

    return 0;
}