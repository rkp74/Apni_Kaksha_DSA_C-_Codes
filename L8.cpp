#include<iostream>
using namespace std;

int main(){

char button;
cout<<"Input a Character:";
cin>>button;

if(button == 'a'){
    cout<<"Hello";
} else if (button == 'b'){
    cout<<"Namaste";
}    else if (button == 'c'){
    cout<<"Salut";
}   else if (button == 'd'){
    cout<<"Hola";
}    else if (button == 'e'){
    cout<<"Ciao";
}   else if (button == 'f'){
    cout<<"Privyet";
 } else {
    cout<<"No button Exist of this Character";
}

}


