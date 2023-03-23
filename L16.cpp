#include <iostream>
using namespace std;

int sum(int num){
      
      int summation = 0;
      for(int i=0;i<=num;i++){
        summation += i;
      }

      return summation;
}

int main(){

int n;
cin>>n;
cout<<sum(n);

}