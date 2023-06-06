//    A 
//    B B
//    C C C    
#include<iostream>
using namespace std;
int main(){
 
  int i=1,n;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=i){
      char ch='A'+i-1;
      cout<< ch <<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}

//    A 
//    B C
//    C D E 
//    D E F G 
#include<iostream>
using namespace std;
int main(){
 
  int i=1,n;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=i){
      char ch='A'+i+j-2;
      cout<< ch <<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}

//    D 
//    C D 
//    B C D 
//    A B C D 
#include<iostream>
using namespace std;
int main(){
 
  int i=1,n;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=i){
      char ch='A'+n-i+j-1;
      cout<< ch <<" ";
      j++;
    }
    cout<<endl;
    i++;
  }  
}

//        *  
//      * *
//    * * * 
//  * * * *  
#include<iostream>
using namespace std;
int main(){
 
  int i=1,n;
  cin>>n;
  while(i<=n){
    int spaces=n-i;
    while(spaces){
      cout<<" "<<" ";
      spaces--;
    }
    int j=1;
    while(j<=i){
      cout<<"*"<<" ";
      j++;
    }
    cout<<endl;
    i++;
  } 
}

//  * * * *  
//  * * * 
//  * *
//  *  
#include<iostream>
using namespace std;
int main(){
 
  int i,n;
  cin>>n;
  i=n;
  while(i!=0){
    int j=1;
    while(j<=i){
      cout<<"*"<<" ";
      j++;
    }
    cout<<endl;
    i--;
  } 
}

