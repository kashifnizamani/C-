/*10. Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
years; use an integer value for the year.*/
#include <iostream>
using namespace std;
int main()
{
	double principalamount,interest,rate,finalamount;
	int years = 0;
	cout<<"enter the principal amount: ";
	cin>>principalamount;
	cout<<"enter the final amount: ";
	cin>>finalamount;
	cout<<"enter interest rate: ";
	cin>>rate;
	rate = rate/100;
	do
	{
	interest = rate * finalamount;
	finalamount = finalamount - interest;
	years++;
}
    while(finalamount >= principalamount);
    	cout<<"time taken = "<<years<<" years";
	return 0;
}
