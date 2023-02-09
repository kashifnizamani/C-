/*2. Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
floating-point numbers. Interaction with the program might look like this:
Type 1 to convert Fahrenheit to Celsius,
2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111*/
#include <iostream>
using namespace std;
int main ()
{
		double x,y,z;
	cout<<"Type 1 to convert Fahrenheit to Celsius,"<<endl;
	cout<<"2 to convert Celsius to Fahrenheit: "<<endl;
	cin>>x;
	if(x == 1)
	{cout<<"enter temperature in fahrenheit: ";
	cin>>y;
	y =  5*(y-32)/9;
	cout<<"temperature in celsius is: "<<y;
	}



	else if(x == 2)
	{
	cout<<"enter temperature in celsius: ";
	cin>>z;
	z =(z*9/5)+32;
    cout<<"temperature in fahrenheit is: "<<z;}
    else
    cout<<"invalid input please try again";








return 0;
}
