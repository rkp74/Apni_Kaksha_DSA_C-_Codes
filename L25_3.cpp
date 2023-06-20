#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0, maxvalue = INT_MIN;
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
        sum += arr[i];

        if (sum < 0)
        {
            sum = 0;
        }

        CurrSum[i] = sum;
    }
    
    cout << "Current Sum SubArray :- "  ;
    for (int i = 0; i < n; i++)
    {
        cout << CurrSum[i] << " " ;
        maxvalue = max(maxvalue, CurrSum[i]);
        
    }
    cout << endl;
    cout << " Maximum SubArray Sum :- " << maxvalue ;
}