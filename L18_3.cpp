#include <bits/stdc++.h>
using namespace std;

int main()
{

    int maxvalue = INT_MIN;
    int minvalue = INT_MAX;

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        maxvalue = max(maxvalue,array[i]);
        minvalue = min(minvalue,array[i]);
    }

    cout<<maxvalue<<endl;
    cout<<minvalue;
}