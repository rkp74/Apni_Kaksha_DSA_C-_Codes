#include <bits/stdc++.h>
using namespace std;

int reverse(int num)
{
    int ans = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        ans = ans * 10 + lastdigit;
        num /= 10;
    }
    return ans;
}

int AddBinary(int a, int b)
{
    int ans = 0;
    int PrevCarry = 0;

    while (a > 0 && b > 0)
    {

        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + PrevCarry;
            PrevCarry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
        {
            if (PrevCarry = 1)
            {
                ans = ans * 10 + 0;
                PrevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                PrevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + PrevCarry;
            PrevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a > 0)
    {
        if (PrevCarry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                PrevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                PrevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
        a /= 10;
    }

    while (b > 0)
    {
        if (PrevCarry == 1)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10 + 0;
                PrevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                PrevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b /= 10;
    }

    if (PrevCarry == 1)
    {
        ans = ans * 10 + 1;
    }

    ans = reverse(ans);

    return ans;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << AddBinary(num1, num2);
}