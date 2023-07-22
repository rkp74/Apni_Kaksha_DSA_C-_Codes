#include <iostream>
using namespace std;

void reverse (string str){
    
    if(str.length() == 0){
        return;
    } 

    string temp = str.substr(1) ;
    reverse(temp) ;
    cout << str[0] ;
}

int main(){
    string rkp = "binod" ;
    reverse(rkp) ;

}