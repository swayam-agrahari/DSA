//  1 2 3 4 5 5 4 3 2 1
//  1 2 3 4 * * 4 3 2 1
//  1 2 3 * * * * 3 2 1
//  1 2 * * * * * * 2 1
//  1 * * * * * * * * 1

#include<iostream>
using namespace std;
int main(){
  int i=5,n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  while(i)
  {
    //first triangle
    int j=1;
    while(j<=i)
    {
      cout<<j<<" ";
      j++;
    }
    //2nd triangle
    int star1=n-i;
    while(star1!=0){
      cout<<'*'<<" ";
      star1--;
    }
    //3rd triangle
    int star2=n-i;
    while(star2!=0){
      cout<<'*'<<" ";
      star2--;
    }
    //4th triangle
    int k=i;
    while(k){
      cout<<k<<" ";
      k--;
    }
    cout<<endl;
    i--;
  }  
}
