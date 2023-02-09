/*6. On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.*/
#include <iostream>
using namespace std;
int main()
{
	double dollar,pound,franc,deutschemark,yen;
	cout<<"enter the number of dollars :";
	cin>>dollar;
	pound = 1.487*dollar;
	franc = 0.172*dollar;
	deutschemark = 0.584*dollar;
	yen = 0.00955*dollar;
	
	cout<<"pounds = "<<pound<<endl;
	cout<<"franc = "<<franc<<endl;
	cout<<"deutschemark = "<<deutschemark<<endl;
	cout<<"yen = "<<yen;
	return 0;
}
