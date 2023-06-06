//    A A A
//    B B B
//    C C C     
//    D D D         
//    E E E 
#include<iostream>
using namespace std;
int main(){
  int i=1,n;
  cout<<"Enter a num:"<<endl;
  cin>> n;
  while(i<=n){
    int j=1;
    while(j<=n){
      char ch='A' +i-1;
      cout<<ch <<" ";
      j++;
    }
    cout<< endl;
    i++; 
    
  }
}

//    A B C
//    A B C
//    A B C    
#include<iostream>
using namespace std;
int main(){
 
  int i=1,n;
  cin>>n;
  while(i<=n){
    int j=1;
      char ch='A';
    while(j<=n){
      cout<< ch <<" ";
      j++;
      ch++;
    }
    cout<<endl;
    i++;
  }  
}

//    A B C
//    D E F
//    G H I    
#include<iostream>
using namespace std;
int main(){
 
  int i=1,n,count=1;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=n){
      char ch='A'+count-1;
      cout<< ch <<" ";
      j++;
      count++;
    }
    cout<<endl;
    i++;
  }
}

//    A B C
//    B C D 
//    C D E    
#include<iostream>
using namespace std;
int main(){
 
  int i=1,n;
  cin>>n;
  while(i<=n){
    int j=1;
    while(j<=n){
      char ch='A'+i+j-2;
      cout<< ch <<" ";
      j++;
    }
    cout<<endl;
    i++;
  }  
}
