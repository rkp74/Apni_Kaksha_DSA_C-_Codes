#include <iostream>
#include <cmath>
using namespace std;

int main(){

int n;
cin>>n;

for(int div=2;div<=sqrt(n);div++){

if(n%div==0){

    cout<<"Number is Not Prime";
    break;
} else {

cout<<"Number is Prime";
break;
}

}




}