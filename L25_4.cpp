#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0, maxvalue = INT_MIN;
    int SumArray = 0;
    cin >> n;
    int arr[n];
    int sumMax = INT_MIN;
    int CurrSum[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        SumArray += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] *= -1;
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }

        CurrSum[i] = sum;
        maxvalue = max(maxvalue, CurrSum[i]);
    } 

    if (arr[0] <= 0)
    {
        cout << "Maximum Circular SubArray Sum :- " << SumArray + maxvalue;
    } else {
        cout << "Use Normal Kadane Algorithm" ;
    }
}