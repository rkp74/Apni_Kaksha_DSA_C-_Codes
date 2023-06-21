#include <iostream>
using namespace std;

int main()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2], m2[n2][n3], ans[n1][n3];

    cout << "Enter the Values for Matrix 1:- ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter the Values for Matrix 2:- ";

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }

    cout << "Matrix 1 :-" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix 2 :-" << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Matrix 3 = Matrix 1 * Matrix 2 :-" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}