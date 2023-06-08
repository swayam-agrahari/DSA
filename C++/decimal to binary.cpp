#include<iostream>
#include<math.h>.h>
using namespace std;
int main(){
  // decimal to binary
  int n,i=0,digit=0;
  cin>> n;
  while(n!=0){
    int bit = n & 1;
    digit =bit * pow(10,i) + digit;
    n= n >> 1;
    i++;
  }
  cout<< digit;
}
