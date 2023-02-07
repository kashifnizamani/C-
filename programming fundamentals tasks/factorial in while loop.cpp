#include <iostream>
using namespace std;
int main()
{
	int x,y,factorial = 1;
	cout<<"enter a number: ";
	cin>>x;
	y = x;
	while(y >= 1)
	{
	factorial *= y;
	 y--;
	}
	
	cout<<x<<"! = "<<factorial;
	return 0;
}
