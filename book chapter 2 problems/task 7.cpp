#include <iostream>
using namespace std;
int main()
{
	double x;
	cout<<"enter temperature in celsius: ";
	cin>>x;
	x =(x*9/5)+32;
    cout<<"temperature in fahrenheit is: "<<x;
	return 0;
}
