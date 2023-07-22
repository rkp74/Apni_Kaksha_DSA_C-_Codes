#include <iostream>
using namespace std;

void asc(int n)
{
    if (n == 0)
    {
        return;
    }
    
    asc(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    asc(n);
}