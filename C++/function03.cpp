#include<iostream>
using namespace std;
bool isprime(int n){
  for(int i = 2;i<n;i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}
int main(){
  int n;
  cout<<"Enter the number:"<<endl;
  cin>>n;
  int ans = isprime(n);
  if(ans){
    cout<<n<<" is prime!"<<endl;
  }
  else{
    cout<<n<<" is not prime"<<endl;
  }
}
