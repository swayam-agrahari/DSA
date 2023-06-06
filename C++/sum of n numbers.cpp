//wap  to print n numbers
#include<iostream>
using namespace std;
int main(){
  int i=1,n;
  cin>> n;
  while(n>=i){
    cout<<i<<" ";
    i++;
  }
}


//wap to find sum of n numbers
#include<iostream>
using namespace std;
int main(){
  int n,sum=0;
  cin>>n;
  while(n!=0){
    sum=sum+n;
    n--;
  }
  cout<<"The sum is "<<sum<<endl;
}


