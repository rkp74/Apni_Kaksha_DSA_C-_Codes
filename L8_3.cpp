#include<iostream>
using namespace std;

int main(){

cout<<"Choose Two Numbers\n";
int a,b; // we can use float for decimal numbers
cin>>a>>b;

char Expression;
cout<<"Choose a Expression:- A/S/M/D\n";
cout<<"A stands for addition\n";
cout<<"S stands for subtraction\n";
cout<<"M stands for multiplication\n";
cout<<"D stands for division\n";

cin>>Expression;

switch (Expression) {

// we can use +,-,*,/ in cases directly.
case 'A':
cout<<a + b;
break;

case 'S':
cout<<a - b;
break;

case 'M':
cout<<a * b;
break;

case 'D':
cout<<a/b;
break;


default :
cout<<"Entered a Invalid Expression\n";
break;


}

}


