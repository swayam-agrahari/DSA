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
