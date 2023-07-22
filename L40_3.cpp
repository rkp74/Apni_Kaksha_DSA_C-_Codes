#include <iostream>
using namespace std;

void duplicate(string s)
{

    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == s[1])
    {
        duplicate(s.substr(1));
    }
    else
    {
        cout << s[0];
        duplicate(s.substr(1)) ;
    }
}

int main()
{
    string str = "aaaabbbeeecdddd";
    duplicate(str);
}