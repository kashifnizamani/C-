#include <iostream>
using namespace std;
int main() {  
  int x=0,y=1,z,i,number=1,terms;    
 cout<<"Enter the number of terms: ";    
 cin>>terms;    
 cout<<x<<" "<<y<<" ";    
   while(number <= terms)
 {    
  z=x+y;
  cout<<z<<" ";    
  x=y;    
  y=z;  
  number++;  
 } 
   return 0;  
   }
