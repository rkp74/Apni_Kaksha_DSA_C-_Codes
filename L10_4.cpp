#include<iostream>
using namespace std;

int main(){


int R,C;
cin>>R>>C;

for(int i=R;i>=1;i--){


for(int j=1;j<= C; j++){

       
          if(j<=i-1){
          cout<<" ";
          } else {
            cout<<"*";
          }

    } 
    
     
    cout<<endl;

 }

    }

    