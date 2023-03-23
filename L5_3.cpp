#include<iostream>
using namespace std;

int main(){

int savings;
cin>>savings;

if(savings>5000){
    
   if(savings>10000){
    cout<<"Road Trip\n";
   } else {
    cout<<"Shopping\n";
   }
   
} else if(savings>2000) {
    cout<<"Muskan";
} else{
    cout<<"Friends";
}

}