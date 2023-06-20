#include <cmath>
#include <iostream>
using namespace std;

int OctalToDecimal(int num)
{
    int ans= 0;
    int i = 0;

    while(num>0){
       int lastdigit = num % 10;
       ans += (lastdigit*(pow(8,i)));
       i++;
       num = num/10;
    }

    return ans;
}

int main()
{
    cout<<"Provide a Octal Number:-";
    int n;
    cin >> n;

    cout << OctalToDecimal(n);
}