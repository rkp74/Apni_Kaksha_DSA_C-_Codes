#include<iostream>
using namespace std;

int main(){

int n;
int div;
int b;
cin>>n>>b;

for(int i=n;i<=b;i++){
    
for(div=2;div<n;div++){

if(n%div==0){
    break;
}

}

if(n==div){
cout<<n<<endl;
}
 
 n = n+1;

}

}


