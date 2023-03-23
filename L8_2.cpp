#include<iostream>
using namespace std;

int main(){

char button;
cout<<"Input a Character:";
cin>>button;

switch (button){

case 'a':
cout<<"Hello\n";
break;

case 'b':
cout<<"Namaste\n";
break;

case 'c':
cout<<"Salut\n";
break;

case 'd':
cout<<"Hola\n";
break;

case 'e':
cout<<"Ciao\n";
break;

case 'f':
cout<<"Privyet\n";
break;

default :
cout<<"No button Exist of this Character\n";
break;


}

}


