#include <iostream>
using namespace std;

void xend(string s)
{
    int count = 0;
    if (s.length() == 0)
    {
        return ;
    }

    if (s[0] == 'x')
    {
        count++ ;
    }
    else
    {
        cout << s[0];
    }
    xend(s.substr(1));
    for (int i =0 ; i< count ; i++){
        cout << 'x' ;
    }
}

int main()
{

    xend("axxbdxcefxhix");
}