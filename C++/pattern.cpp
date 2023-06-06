//    ***
//    ***
//    ***
#include<iostream>
using namespace std;
int main(){
  int row,column;
  row=1;
  while(row<=3){
    column=1;
    while(column<=3){
      cout<<"* ";
      column++;
    }
    cout<<endl;
    row++;
  }
}

//    111
//    222
//    333
#include<iostream>
using namespace std;
int main(){
  int i=1,n;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<i<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}

//    1234
//    1234
//    1234
#include<iostream>
using namespace std;
int main(){
  int i=1,n;
  cin>>n;
 while(i<=n){
   int j=1;
   while(j<=n){
     cout<<j<<" ";
     j++;
   }
   cout<<endl;
   i++;
 }
}

