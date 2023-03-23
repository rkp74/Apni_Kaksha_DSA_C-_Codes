#include <iostream>
using namespace std;

int BinarySearch(int array[], int n, int key)
{

    int s = 0, e = n;
    while (s <= e)
    {

        int mid = (s + e) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{

    /*

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a;
        }
        else
        {
            cout << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }

    int num;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }

    int n;
    cin >> n;

    while (n > 0)
    {
        cin >> n;
    }

    int t;
    cin >> t;

    do
    {
        cout << t << endl;
        cin >> t;
    } while (t > 0);

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {

        int div;

        for (div = 2; div < i; div++)

            if (i % div == 0)
            {
                break;
            }

        if (i == div)
        {
            cout << i << " Is Prime" << endl;
        }
    }

    char button;
    cout << "Choose Any Button.";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello Rajan";
        break;

    case 'b':
        cout << "Hello Vranda";
        break;

    case 'c':
        cout << "Hello Riya";
        break;

    case 'd':
        cout << "Hello Patel";
        break;

    case 'e':
        cout << "Hello smruti";
        break;

    default:
        cout << "I still Don't Know your Name.";
    }

    int row, coloumn;
    cin >> row >> coloumn;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= coloumn; j++)
        {
            if (i == 1 || i == row)
            {
                cout << "*";
            }
            else
            {
                if (j == 1 || j == coloumn)
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
        }
        cout << "\n";
    }

    int row, coloumn;
    cin >> row >> coloumn;
    for (int i = 1; i <= row; i++)
    {
        for (int j = coloumn; j >= 1; j--)
        {

            cout << "*";
        }
        coloumn--;
        cout << "\n";
    }

    int R, C;
    cin >> R >> C;

    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {

            if (j <= i)
            {
                cout << i;
            }
            else
            {
                cout << "-";
            }
        }
        cout << endl;
    }

    int R, C, t = 0;
    cin >> R >> C;

    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {

            if (j <= i)
            {
                t = t + 1;
                cout << " " << t;
            }
        }
        cout << endl;
    }

    int n, i, j;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        int space = 2 * n - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        int space = 2 * n - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }

        cout << endl;
    }

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << " " << j;
        }

        cout << endl;
    }

    int n, i, j, k;
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        k = i;
        for (; j <= n; j++)
        {
            cout << k--;
        }

        k = 2;

        for (; j <= n + i - 1; j++)
        {
            cout << k++;
        }

        cout << endl;
    }

    int n, j;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << " *";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << " *";
        }

        cout << endl;
    }



    int n;
    cin >> n;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (((i + j) % 4 == 0) ||
                (i == 2 && j % 4 == 0))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }




   int n,reverse=0;
   cin>>n;


   while(n>0){
      int lastdigit = n%10;
      reverse = reverse*10 + lastdigit;
      n = n/10;
   }
    cout<<reverse;
    return 0;

    */

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cin >> key;

    cout << BinarySearch(array, n, key);

}