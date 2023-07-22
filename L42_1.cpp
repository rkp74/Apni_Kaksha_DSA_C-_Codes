#include <iostream>
using namespace std;

int friendpair(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    if (n == 2)
    {
        return 2;
    }

    return friendpair(n-1) + friendpair(n-2)*(n-1) ;
}

int main()
{
    cout << friendpair(3);
}