#include <iostream>
using namespace std;
int main() {  
  int x=0,y=1,z,i,number;    
 cout<<"Enter the number of terms: ";    
 cin>>number;    
 cout<<x<<" "<<y<<" ";    
 for(i=2;i<number;++i)  
 {    
  z=x+y;    
  cout<<z<<" ";    
  x=y;    
  y=z;    
 } 
   return 0;  
   }
