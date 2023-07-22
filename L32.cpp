#include <iostream>
using namespace std;

int main()
{

    string s1 = "Nincompghshhkjjhcadajewajnaeoop";

    // convert into upper case

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] -= 32 ;
        }
    }

    cout << s1 ;
}