#include<iostream>
using namespace std;

int main(){

int a , b , div;
    cin>>a>>b;

    for(int i = a; i <= b ; i++) {

        for(div = 2 ; div < i ; div++) {

            if(i % div == 0)
            {
              break;
            
            } 
        }
        if ( i == div){
        cout << i <<"\n"; }
    }

}


