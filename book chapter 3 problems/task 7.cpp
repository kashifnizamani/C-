/*7. Write a program that calculates how much money you’ll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent. Some interaction
with the program might look like this:
Enter initial amount: 3000
Enter number of years: 10
Enter interest rate (percent per year): 5.5
At the end of 10 years, you will have 5124.43 dollars.*/
#include <iostream>
using namespace std;
int main()
{
	double principalamount,years,interest,rate,finalamount;
	cout<<"enter the principal amount: ";
	cin>>principalamount;
	cout<<"enter the number of years: ";
	cin>>years;
	cout<<"enter interest rate: ";
	cin>>rate;
	rate = rate/100;
	interest = principalamount;
	for(int i = 1; i <= years; i++)
	{
	interest = principalamount*rate;
	finalamount = interest + principalamount;
	principalamount = finalamount;
}
	cout<<"after "<<years<<" years you would have: "<<finalamount;
	return 0;
}
