#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int DecimalToOctal(int num)
{

    int ans = 0;
    int x = 0;

    while (num >= 1)
    {

        int lastdigit = num % 8;
        ans+= pow(10,x)*lastdigit;
        num /= 8;
        x++;
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    cout << DecimalToOctal(n);
}