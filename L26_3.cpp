#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool flag = false;
    cout << " Provide nuber to search :- ";
    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == k)
            {
                cout << i << " " << j;
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << " Element is Found.";
    }
    else
    {
        cout << "Element is Not Found.";
    }
}
