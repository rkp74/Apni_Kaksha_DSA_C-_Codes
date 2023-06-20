#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cin >> n;
    int arr[n];
    int sumMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            sumMax = max(sumMax, sum);
        }
        sum = 0;
    }
    cout << sumMax;
}