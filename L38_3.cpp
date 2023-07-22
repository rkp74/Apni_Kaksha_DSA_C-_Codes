#include <iostream>
using namespace std;

long long fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    long long prevfibo = fibonacci(n - 1) + fibonacci(n - 2);
    return prevfibo;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
}