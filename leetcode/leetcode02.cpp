//leetcode02
// for an integer n, return the number of 1 bits

#include<iostream>
using namespace std;
int main(){
  int n,remainder,count=0;
  cout<<"Enter the number:"<<endl;
  cin>>n;
  while(n!=0){
    remainder=n % 2;
    if(remainder == 1){
      count++;
    }
    n=n/2;   
  }
  cout<<"The answer is "<<count<<endl;
}
