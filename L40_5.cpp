#include <iostream>
using namespace std;

string xend(string s)
{

    if (s.length() == 0)
    {
        return "";
    }

    char temp = s[0] ;
    string ans = xend(s.substr(1)) ;

    if (temp == 'x'){
        return ans + temp ;
    }
    return temp + ans ;

    
}

int main()
{

   cout <<  xend("axxbdxcefxhix");
}