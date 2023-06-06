//  * * * *  
//    * * * 
//      * *
//        *  
#include<iostream>
using namespace std;
int main(){
 
  int i,n;
  cin>>n;
  i=1;
  while(i<=n){
  int spaces=i-1;
    while(spaces){
      cout<<" "<<" ";
      spaces--;
    }
    int j=n-i+1;
    while(j!=0){
      cout<<"*"<<" ";
      j--;
    }
    cout<<endl;
    i++;
  } 
}


//  ___1
//  __121
//  _12321
//  1234321

#include<iostream>
using namespace std;
int main(){
  int i=1,n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  while(i<=n)
  {
    
    int spaces=n-i;
    while(spaces)
    {
      cout<<" ";
      spaces--;
    }
    
    int j=1;
    while(j<=i)
    {
      cout<<j;
      j++;
    } 
    
    int k=i-1;
    while(k)
    {
      cout<<k;
      k--;
      
    }
  
    cout<<endl;
    i++;
  }
}
