#include <iostream>
using namespace std;

bool power(int n){

    if(n !=0 && (n & n-1) == 0){
        return true;
    } else {
        return false ;
    }
}


int main(){

    int n;
    cin >> n;
    cout << power(n) ; 

}