#include <bits/stdc++.h>
using namespace std;

int DecimalToBinary(int num)
{

    int ans = 0;
    int x = 0;

    while (num >= 1)
    {

        int lastdigit = num % 2;
        ans+= pow(10,x)*lastdigit;
        num /= 2;
        x++;
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    cout << DecimalToBinary(n);
}