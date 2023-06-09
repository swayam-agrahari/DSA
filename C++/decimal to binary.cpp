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



// Another process

#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n,bit,sum=0;
  cin>>n;
  int i = 0;
  while(n!=0){
    bit = n % 2;
    sum = sum + bit * pow(10,i);
    n = n / 2;
    i++;
    }
  cout<<sum;
}
