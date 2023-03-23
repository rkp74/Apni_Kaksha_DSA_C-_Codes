#include<iostream>
using namespace std;

int main(){

int i = 3, j = 4, k;

k = i + j + i++ + ++i + j++ + ++j ;

cout<<i<<"\n"<<j<<"\n"<<k<<endl;



}