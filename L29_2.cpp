#include <iostream>
using namespace std;

int main()
{

    char ch = 'a';
    char *cptr;
    cptr = &ch;
    cout << static_cast<void*>(cptr) << endl;

    cptr++ ;
    cout << static_cast<void*>(cptr) << endl;


}