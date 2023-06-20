#include<iostream>
using namespace std;

int main(){

int Pocket_money = 3000;
for(int date=1;date<=30;date++){

        if(date%2==0){
            continue;
        }

        if(Pocket_money==0){
            break;
        }
        
        cout<< date << " Go Out Today\n";
        Pocket_money = Pocket_money - 300;

        }

}



