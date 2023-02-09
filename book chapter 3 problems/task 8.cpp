/*8. Write a program that repeatedly asks the user to enter two money amounts expressed in
old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts
and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
user whether the program should be terminated. Typical interaction might be
Enter first amount: £5.10.6
Enter second amount: £3.2.6
Total is £8.13.0
Do you wish to continue (y/n)?*/
#include <iostream>
using namespace std;
int main()
{
	int x,y,z,a,b,c,sum,pounds,shillings,pence;
	
	char point,again;
	do
	{
		cout<<"enter first amount: ";
		cin>>x>>point>>y>>point>>z;
		cout<<"enter second amount: ";
		cin>>a>>point>>b>>point>>c;
	
		pounds = x + a;
		shillings = y + b;
		pence = z + c;
		if(pence <= 11)
		pence = z + c;
		else
		{
		shillings += pence/12;
		pence = pence % 12;
		
	}
		if(shillings <= 19)
		shillings = y + b;
		else
		{
		pounds += shillings/20;
		shillings = shillings % 20;
	}
		cout<<"sum = "<<pounds<<point<<shillings<<point<<pence<<endl;
		cout<<"do you wish to continue: y/n: ";
		cin>>again;
}
	while(again == 'y' || again == 'Y');
	return 0;
	
	
}
