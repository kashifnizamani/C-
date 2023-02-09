/*11. Create a three-function calculator for old-style English currency, where money amounts
are specified in pounds, shillings, and pence. (See Exercises 10 and 12 in Chapter 2.)
The calculator should allow the user to add or subtract two money amounts, or to multiply
a money amount by a floating-point number. (It doesn’t make sense to multiply two
money amounts; there is no such thing as square money. We’ll ignore division. Use the
general style of the ordinary four-function calculator in Exercise 4 in this chapter.*/
#include <iostream>
using namespace std;
int main()
{
	int x,y,z,a,b,c,sum,pounds,shillings,pence;
	float num;
	
	char point,again,operation;
	do
	{
		cout<<"enter first amount: ";
		cin>>x>>point>>y>>point>>z;
		cout<<"enter the operation you want to perform: ";
		cin>>operation;
		if(operation == '*')
		{
			cout<<"enter the number you want to multiply your amount with: ";
			cin>>num;
			pounds = x * num;
		shillings = y * num;
		pence = z * num;
		if(pence <= 11)
		pence = z * c;
		else
		{
		shillings += pence/12;
		pence = pence % 12;
		
	}
		if(shillings <= 19)
		shillings = y * b;
		else
		{
		pounds += shillings/20;
		shillings = shillings % 20;
	}
		cout<<"product = "<<pounds<<point<<shillings<<point<<pence<<endl;
				cout<<"do you wish to continue: y/n: ";
		cin>>again;
		}
	
		else if(operation == '-')
		{
		cout<<"enter second amount: ";
		cin>>a>>point>>b>>point>>c;
	
		pounds = x - a;
		shillings = y - b;
		pence = z - c;
		if(pence <= 11)
		pence = z - c;
		else
		{
		shillings += pence/12;
		pence = pence % 12;
		
	}
		if(shillings <= 19)
		shillings = y - b;
		else
		{
		pounds += shillings/20;
		shillings = shillings % 20;
	}
	cout<<"difference = "<<pounds<<point<<shillings<<point<<pence<<endl;
		cout<<"do you wish to continue: y/n: ";
		cin>>again;
}
     else if(operation == '+')
     {
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
		
	 }
	 else
	 {
	 	cout<<"invalid operation please try again"<<endl;
		cout<<"do you wish to continue: y/n: ";
		cin>>again;	
	 }
	
}
	    while(again == 'y' || again == 'Y');
     	return 0;
	}
