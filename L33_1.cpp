#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Give the value of n" ;
    cin >> n;

    int i ;
    cout << "Give the value of i" ;
    cin >> i ;

    int s = 1 << i ;
    int r = n | s ;

    cout << r ;
}