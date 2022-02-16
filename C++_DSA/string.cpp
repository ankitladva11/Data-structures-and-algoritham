#include <iostream>
#include <string>

using namespace std;
int main()
{

    string s = "ankit";
    string ss = "ladva";
    ss = ss + ' ' + s;
    cout << ss << endl;
    ss=ss+' ';
    string rev =""; 
    string word ="";
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i] != ' ')
        {
            word = word + ss[i];
        }
        else
        {
                rev=word+" "+rev;
        }
    }
    cout <<rev<< endl;

    return 0;
}