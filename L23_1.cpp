#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cin >> n;
    int arr[n] ;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum<< " ";
        }

        cout<<endl;
        sum = 0;
    }
}