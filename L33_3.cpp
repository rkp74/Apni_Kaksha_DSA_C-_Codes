#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Give the value of n" ;
    cin >> n;

    int i ;
    cout << "Give the value of i" ;
    cin >> i ;

    int q = 1 << i ;
    int r = ~(q) ;
    
    cout << r << endl;
    int p = r & n ;
    int s = p | q ;

    cout << s ;

    
}