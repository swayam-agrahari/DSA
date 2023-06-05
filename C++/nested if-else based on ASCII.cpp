#include<iostream>
using namespace std;
int main(){
  char ch;
  ch=cin.get();
  if(ch>=65 && ch<=90){
    cout<<ch<<" is upper case"<<endl;
  }
  else if(ch>=97 && ch<=122){
    cout<<ch<<" is lower case"<<endl;
  }
  else if(ch>=48 && ch<=57){
    cout<<ch<<" is numeric"<<endl;
  }
  
}
