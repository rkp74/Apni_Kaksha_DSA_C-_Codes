#include <iostream>
using namespace std;

int gameboard(int s, int e)
{
    if (s == e)
    {
        return 1;
    }

    if (s > e)
    {
        return 0;
    }

    int count = 0 ;



    for (int i = 1; i < 7; i++)
    {
        count += gameboard(s + i, e);
        cout << "count : - " << count << endl;
    }

    return count ;
}

int main()
{
    cout << gameboard(0, 3);
}