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
   
   int n;
   cin>>n;
   cout<<factorial(n);
}