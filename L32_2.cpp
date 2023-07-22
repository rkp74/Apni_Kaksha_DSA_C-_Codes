#include <iostream>
using namespace std;

int main()
{

    string s = "Nincompghshhkjjhcadajewajnaeoop";
    
    transform(s.begin(), s.end(),s.begin(), :: toupper) ;

    cout << s << endl;

    transform(s.begin(), s.end(),s.begin(), :: tolower) ;

    cout << s;

}