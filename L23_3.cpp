
#include <iostream>
#include <climits> 
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxvalue = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
      
        if (arr[i] > arr[i + 1] && arr[i] > maxvalue)
        {
            cout << "Record Breaking Day " << i+1 <<endl;
            count++;
        }
        

        maxvalue = max(maxvalue, arr[i]);
    }
    cout<<count << " "<< maxvalue;
}

