#include<iostream>
using namespace std;

int main(){

int n;
int div;
cin>>n;


for(div=2;div<n;div++){

if(n%div==0){
    cout<<"Number is Non-Prime\n";
    break;
}

}

if(n==div){
cout<<"Number is Prime\n";
}

}



