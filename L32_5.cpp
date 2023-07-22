#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "abmmmmmcacbade";
    sort(s.begin(), s.end());
    
    int fre[26];
    int maxvalue = 0;

    for (int i = 0; i < 26; i++)
    {
        fre[i] = 0;
    }

    for(int i =0 ; i< s.size() ; i++){
        fre[s[i]-'a']++ ;
    }

    for (int i = 0; i < 26; i++)
    {
        maxvalue = max(fre[i] , maxvalue) ;
    }

    cout << maxvalue;
}