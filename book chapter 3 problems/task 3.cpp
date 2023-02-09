#include <iostream>
/*3. Operators such as >>, which read input from the keyboard, must be able to convert a
series of digits into a number. Write a program that does the same thing. It should allow
the user to type up to six digits, and then display the resulting number as a type long
integer. The digits should be read individually, as characters, using getche().
Constructing the number involves multiplying the existing value by 10 and then adding
the new digit. (Hint: Subtract 48 or ‘0’ to go from ASCII to a numerical digit
Here’s some sample interaction:
Enter a number: 123456
Number is: 123456*/
#include <conio.h>
using namespace std;
int main ()
{
	char a;
	cout<<"enter a number: ";
	a = getch();
	a = a-48;
	long result = a;
	for (int i = 2; i <= 6; i++)
	{
		a = getch();
		a = a-48;
		result = (result*10)+a;
		}
	
	cout<<endl<<"the number is: "<<result;
	
}
