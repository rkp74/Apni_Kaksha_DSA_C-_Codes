#include<iostream>
using namespace std;

int main(){

int R,C;
cin>>R>>C;

for(int i=1;i<=R;i++){
     
     int j;

     if(i == 1 
     || i== R) {
        
          for(j=1;j<=C;j++){
            cout<<"*";
          }

     } else {

        for(j=1;j<=C;j++){
               
                   if(j==1
                   || j==C ){
                    cout<<"*";
                   } else {
                    cout<<" ";
                   }

        }

     }


cout<<endl;

    }
}
    