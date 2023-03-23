#include<iostream>
using namespace std;

int main() {

int n;
cin>>n;

if(n%2==0 && n%3==0){

cout<<"Number is Divisible by both 2 and 3\n";

}else if (n%2==0){

cout<<"Number is Divisible by 2 only\n";

} else if (n%3==0){

cout<<"Number is Divisible by 3 Only\n";

} else {

cout<<"Number is not Divisible by either 2 or 3\n";

}

}