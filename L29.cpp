#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* aptr ;
    aptr = &a ;
    
    cout << *aptr << endl;
    *aptr = 20 ;
    cout << a << endl;
    cout << aptr << endl;
    cout << &a <<  endl ;
}