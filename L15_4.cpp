#include <iostream>
using namespace std;

int factorial(int num)
{

    int mul = 1;
    for (int i = 1; i <= num; i++)
    {
        mul *= i;
    }
    return mul;
}

int ncr(int n, int r)
{

    int valuencr = factorial(n) / (factorial(n - r) * factorial(r));

    return valuencr;
}

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
