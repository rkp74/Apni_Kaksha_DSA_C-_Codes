#include <iostream>
using namespace std;

int main() {

  int n1,n2;
  cin>>n1>>n2;

  int f1 =1,f2 =1;

  for(int i = 1;i<=n1;i++){

      f1 *= i;
  }
  
  for(int i = 1;i<=n2;i++){

      f2 *= i;
  }

cout<<f1<<" "<<f2;

    return 0;
}