#include <iostream>
using namespace std;

bool PairSum(int n, int arr[], int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    bool pair;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter The value of Sum";
    cin >> k;

    cout << PairSum(n, arr, k);
}