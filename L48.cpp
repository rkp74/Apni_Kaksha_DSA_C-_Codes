#include <iostream>
using namespace std;

int Merge(int arr[], int l, int mid, int r)
{ 
    int inv = 0 ;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1], b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv+= n1 - i;
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        inv+= n1 - i;
        j++;
    }

    return inv;
}

int MergeSort(int arr[], int l, int r)
{
    int inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);

        inv = Merge(arr, l, mid, r);
    }
    return inv;
}

int main()
{
    int arr[8] = {6, 3, 9, 5, 2, 8, 7, 1};
    cout << MergeSort(arr, 0, 7);
}