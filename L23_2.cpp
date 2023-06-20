#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 2;
    int pd = arr[1] - arr[0];
    int curr = 2;

    for(int j= 2; j<n; j++ )
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }


        ans = max(curr, ans);
    }
    cout << ans;
}