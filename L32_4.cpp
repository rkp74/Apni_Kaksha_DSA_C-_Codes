#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "195282345";

    sort(s.begin(), s.end(),greater<int>());

    int x = stoi(s);
    cout << x;
}