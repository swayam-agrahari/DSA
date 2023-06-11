#include<iostream>
using namespace std;
void find(int n ){
  if (n % 2 !=0){
    cout<< n<< " is an odd number!"<<endl;
  }
  else{
    cout<<n<<" is an even number!"<<endl;
  }
}
int main(){
  int n;
  cin>>n;
  find(n);
}
