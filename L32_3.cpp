#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "12345";

    for (int i = 0; i < s.size() - 1; i++)
    {
        for (int j = i+1; j < s.size(); j++)
        {
            if (s[j] > s[i])
            {
                int temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    int x = stoi(s);
    cout << x;
}