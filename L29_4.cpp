#include <iostream>
using namespace std;

int main(){

    int a = 10 ;
    int *p = &a ;
    
    cout << a << endl ;
    cout << p << endl ;
    cout << *p << endl ;

    int **q = &p ;

    cout << q << endl ;
    cout << *q << endl ;
    cout << **q << endl ;
    cout << &p << endl;
    cout << &q << endl;

}