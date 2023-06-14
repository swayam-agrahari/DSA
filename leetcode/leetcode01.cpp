
//leetcode01
// for an integer n, find difference of sum and product of its digits.

#include<iostream>
using namespace std;
int main(){
  int n,remainder,quotient,sum=0,product=1;
  cout<<"Enter the number:"<<endl;
  cin>>n;
  while(n!=0){
    remainder=n % 10;
    quotient= n / 10;
    sum=sum+remainder;
    product=product*remainder;
    n=quotient;   
  }
  cout<<"The difference is "<<product -sum<<endl;
}
