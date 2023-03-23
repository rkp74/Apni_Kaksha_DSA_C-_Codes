#include <iostream>
using namespace std;

int main()
{

    int R, C;
    cin >> R >> C;

    for (int i = 1; i <= R; i++)
    {

        for (int j = 1; j <= C; j++)
        {
            if ((i + j) <= 5)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout<<"\n" ;
    }

    return 0;
}