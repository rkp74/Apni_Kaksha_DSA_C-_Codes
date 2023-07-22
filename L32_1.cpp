#include <iostream>
using namespace std;

int main()
{

    string s1 = "NincoGJBJCBBCDBJBHJDGUUDSHp";

    // convert into Lower case

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] += 32 ;
        }
    }

    cout << s1 ;
}