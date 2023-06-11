#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int hund,fifty,tewn,ones;
  switch(1){
    case 1: hund = n/100;
           if(hund !=0){
            cout<<"Required hundered bills is "<<hund<<endl;
             n = n % 100;
           }
    case 2: fifty = n/50;
           if(fifty !=0){
            cout<<"Required fifty bills is "<<fifty<<endl;
             n = n % 50;
           }
     case 3: tewn = n/20;
           if(tewn !=0){
            cout<<"Required twenty bills is "<<tewn<<endl;
             n = n % 20;
           }
     case 4: ones = n;
           if(ones !=0){
            cout<<"Required one bills is "<<ones<<endl;
             
           }
  }
}
