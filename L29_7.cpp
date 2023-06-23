#include <iostream>
using namespace std;

void swap(int *a ,int *b){
    int temp = *a ;
    cout << temp<<endl;
    *a = *b ;

    cout << *a << endl ;
    cout << &a << endl ;
    cout << a << endl ;
    cout << &b << endl ;
    cout << b << endl;

    *b = temp ;


}


int main() {
    
    int a = 2 ;
    int b = 4 ;

    int *aptr = &a ;
    int *bptr = &b ;

    swap(aptr , bptr) ;

    cout << a << " " << b ;


}