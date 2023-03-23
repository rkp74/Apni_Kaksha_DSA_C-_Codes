#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int Reverse =0;
while(n>0){
    int last_digit = n%10; 
    Reverse = Reverse * 10 + last_digit ;
    n = n/10;
}

cout<<Reverse<<endl; 


}