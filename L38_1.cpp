#include <iostream>
using namespace std;

int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    int Ans = power(n, p - 1);
    return Ans * n;
}

int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p);
}