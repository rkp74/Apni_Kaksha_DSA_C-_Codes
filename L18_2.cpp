#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{

    int n;
    int maxvalue = INT_MIN;
    //int maxvalue= -pow(2,31);
    int minvalue = pow(2,31) - 1;
    // int minvalue = INT_MAX;
    
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > maxvalue)
        {
            maxvalue = array[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] < minvalue)
        {
            minvalue = array[i];
        }
    }
    cout<<maxvalue<<endl;
    cout<<minvalue<<endl;
}