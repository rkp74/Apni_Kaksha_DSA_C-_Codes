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
    int d = n & d ;

    if(d == 0){
        cout << "The value of bit at index " << i << " is 0" ;
    } else {
        cout << "The value of bit at index " << i << " is 1" ;
    }
}