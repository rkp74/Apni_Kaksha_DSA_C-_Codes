#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{

    int n ;
    cin >> n;
    int arr[n] ;
    int maxvalue = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        maxvalue = max(maxvalue, arr[i]);
        cout << "i = " << i << " :- " << maxvalue << endl;
    }
}