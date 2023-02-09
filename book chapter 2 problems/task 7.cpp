/*7. You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number
representing degrees Celsius, and then displays the corresponding degrees
Fahrenheit.*/
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
