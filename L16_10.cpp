#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// BTD stands for Binary To Decimal.
int BTD(int num)
{
    int ans = 0;
    int i = 0;

    while (num > 0)
    {
        int lastdigit = num % 10;
        ans += (lastdigit * (pow(2, i)));
        i++;
        num = num / 10;
    }

    return ans;
}

// DTB stands for Decimal To Binary.
int DTB(int num)
{

    int ans = 0;
    int x = 0;

    while (num >= 1)
    {

        int lastdigit = num % 2;
        ans += pow(10, x) * lastdigit;
        num /= 2;
        x++;
    }

    return ans;
}

int main()
{
    int a, b;
    cout<<"Provide 2 Binary Numbers.";
    cin >> a >> b;

   int x = BTD(a);
   int  y = BTD(b);

    int sum = x + y;
    int answer = DTB(sum);
    cout << answer;

    return 0;
}