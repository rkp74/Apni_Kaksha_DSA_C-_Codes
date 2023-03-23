#include <iostream>
using namespace std;

int factorial(int num){
    
    int mul = 1;
    for(int i=1;i<=num;i++){
        mul *= i;
    }
    return mul;
}


int main(){
   
   int n,r;
   cout<<"Provide the value of n and r for Calculation of nCr.";
   cin>>n>>r;
   int nCr = factorial(n)/(factorial(n-r)*factorial(r));
   cout<<n<<"C"<<r<<"= "<<nCr;
}