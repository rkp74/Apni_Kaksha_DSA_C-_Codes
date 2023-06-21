#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    bool found = false;
    int r = 0 ,c = m-1 ;

    while (r < n and c >= 0)
    {
        if (arr[r][c] == target)
        {
            found = true;
            break;
        }
        else if (arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }
}
