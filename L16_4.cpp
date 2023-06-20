#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int HexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 0;
    int s = n.size();

    for (int i = s - 1; i >= 0; i--)
    {

        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += (pow(16, x) * (n[i] - '0'));
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += (pow(16, x) * (n[i] - 'A' + 10));
        }

        x++;
    }
    return ans;
}

int main()
{

    string n;
    cin >> n;
    cout << HexadecimalToDecimal(n);
}