#include <iostream>
#include <cmath>
using namespace std;

int main(){

int n,div;
cin>>n;

for( div=2;div<=sqrt(n);div++){

if(n % div == 0){

    cout<<"Number is Not Prime";
    break ;
} 

}

if(sqrt(n)<div){
cout<<"Number is Prime\n";
}

}