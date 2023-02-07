#include <iostream>
using namespace std;
int main()
{
	int x,y = 1,z = 0;
	cout<<"enter any number: ";
	cin>>x;
	while(y<=x)
	{
    if((x%y) == 0)
    
    {
    	z++;
    	
	}
	y++;
	}
	if(z==2)
	cout<<x<<" is a prime number";
	else
	cout<<x<<" is not a prime number";
	
	return 0;
}
