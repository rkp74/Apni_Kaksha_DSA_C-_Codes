#include <iostream>
using namespace std;

bool PairSum(int n, int arr[], int k)
{

    int low = 0, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
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