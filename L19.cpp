#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    int n, index = -1;
    cout << "Give the value of n.";
    cin >> n;
    int array[n];

    cout << "Give the elements of Array.";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "Give the value of Key.";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            index = i;
        }
    }

    cout << index;

    return 0;
}