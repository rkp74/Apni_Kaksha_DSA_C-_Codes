#include <iostream>
#include <cmath>
#include <string>
using namespace std;


string DecimalToHexadecimal(int num)
{

    string ans = "";
    int x = 0;

    while (num >= 1)
    {

        int lastdigit = num % 16;
        num /= 16;
        x++;

        if (lastdigit <= 9)
        {
            ans = ans + to_string(lastdigit);
        }
        else
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    int n;
    cin >> n;
    cout << DecimalToHexadecimal(n);
}