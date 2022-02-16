#include <iostream>
#include <stack>
#include <string>

using namespace std;
bool balanced(string s)
{
    int n = s.length();
    stack<char> ss;
    for (int i = n - 1; i >= 0; i--)
    {
        ss.push(s[i]);
    }
    if ((n % 2) != 0)
    {
        return 0;
    }
    else
    {
        char t = ss.top();
        if (t == ')' || t == '}' || t == ']')
            return 0;

        for (int i = 0; i < n - 1; i++)
        {
            ss.pop();
        }
        char t2 = ss.top();
        if (t == '(' && t2 == ')' ||
            t == '{' && t2 == '}' ||
            t == '[' && t2 == ']')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    string s1 = "{)";
    cout << balanced(s1);
    return 0;
}