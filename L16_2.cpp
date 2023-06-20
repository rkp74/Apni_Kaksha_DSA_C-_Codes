#include <cmath>
#include <iostream>
using namespace std;

int BinaryToDecimal(int num)
{
    int ans= 0;
    int i = 0;

    while(num>0){
       int lastdigit = num % 10;
       ans += (lastdigit*(pow(2,i)));
       i++;
       num = num/10;
    }

    return ans;
}

int main()
{
    cout<<"Provide a Binary Number:-";
    int n;
    cin >> n;

    cout << BinaryToDecimal(n);
}
