#include <iostream>
using namespace std;
int main()
{
	int x,y,factorial = 1;
	cout<<"enter a number: ";
	cin>>x;
	for(y = x; y >= 1; y--)
	{
	factorial *= y;
	
	}
	
	cout<<x<<"! = "<<factorial;
	return 0;
}
