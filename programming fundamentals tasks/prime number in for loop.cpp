#include <iostream>
using namespace std;
int main()
{
	int x,y,z = 0;
	cout<<"enter any number: ";
	cin>>x;
	for(y = 1; y<=x; y++)
	{
    if((x%y) == 0)
    {
    	z++;
	}
	}
	if(z==2)
	cout<<x<<" is a prime number";
	else
	cout<<x<<" is not a prime number";
	
	return 0;
}
