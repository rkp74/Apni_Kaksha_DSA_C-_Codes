#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string s1 = "abc";
    string s2 = "xyz";

    string s3 = "def" ;
    string s4 = "dfb" ;

    string s5 = "abc" ;

    cout << s2.compare(s1) << endl ;
    cout << s3.compare(s4) << endl ; 
    cout << s1.compare(s5) << endl ; 

    
    return 0;
}