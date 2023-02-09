/*12. Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
applied to fractions:
Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*d) / (b*c)
The user should type the first fraction, an operator, and a second fraction. The program
should then display the result and ask whether the user wants to continue.*/
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	double num1,num2,num3,num4;
	char fraction,op,x;
	do
	{
		cout<<"enter 1st fraction,operation and 2nd fraction: ";
	    cin>>num1>>fraction>>num2>>op>>num3>>fraction>>num4;
		switch (op){
			case '+':
				cout<<(num1*num4 + num2*num3)<<fraction<<num2*num4;
				break;
			case '-':
				cout<<(num1*num4 - num2*num3)<<fraction<<num2*num4;
				break;
			case '*':
				cout<<num1*num3<<fraction<<num2*num4;
				break;
			case '/':
				cout<<num1*num4<<fraction<<num2*num3;
				break;	
			default:
			cout<<"invalid operator";
		
		}
			cout<<"\ndo another calculation? : y/n: ";
			cin>>x;	

	}
				while(x == 'y' || x == 'Y');
	return 0;
}
