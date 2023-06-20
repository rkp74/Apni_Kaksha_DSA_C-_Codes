#include <iostream>
#include <string>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{// s stands for starting element and e stands for ending element.
    int s = 0, e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
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

    int n;
    cin >> n;

    int array[n];
    cout<<"Provide the Array in Sorted Order." ;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cin >> key;

    cout << BinarySearch(array, n, key);
}