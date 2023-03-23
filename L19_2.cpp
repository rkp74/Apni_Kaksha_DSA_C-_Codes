#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
        }
    }

    return index;
}

int main()
{

    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cin >> key;
    cout<<LinearSearch(array, n, key);

    return 0;
}
