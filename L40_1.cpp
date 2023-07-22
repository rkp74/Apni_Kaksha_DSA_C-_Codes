#include <iostream>
using namespace std;

void pistring(string s)
{

    string pi = "3.14";

    if (s.size() == 0)
    {
        return;
    }

    string temp = s.substr(2);


    if (s[0] == 'p' && s[1] == 'i')
    {
       cout << "3.14" ;
       pistring(temp) ;
    } else {
        cout << s[0] ;
        pistring(s.substr(1)) ;
    }
}

int main()
{
    string str = "pippxxppiixipi";
    pistring(str);
}