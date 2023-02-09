/*10. In the heyday of the British empire, Great Britain used a monetary system based on
pounds, shillings, and pence. There were 20 shillings to a pound, and 12 pence to a
shilling. The notation for this old system used the pound sign, £, and two decimal points,
so that, for example, £5.2.8 meant 5 pounds, 2 shillings, and 8 pence. (Pence is the plural
of penny.) The new monetary system, introduced in the 1950s, consists of only pounds
and pence, with 100 pence to a pound (like U.S. dollars and cents). We’ll call this new
system decimal pounds. Thus £5.2.8 in the old notation is £5.13 in decimal pounds (actually
£5.1333333). Write a program to convert the old pounds-shillings-pence format to
decimal pounds. An example of the user’s interaction with the program would be
Enter pounds: 7
Enter shillings: 17
Enter pence: 9
Decimal pounds = £7.89*/
#include <iostream>
using namespace std;
int main()
{
	double a,b,c,x;
	cout<<"enter pounds :";
	cin>>a;
	cout<<"enter shillings :";
	cin>>b;
	cout<<"enter pence :";
	cin>>c;
	x = a+(b*12+c)/240;
	cout<<"decimal pounds = \x9c"<<x;
	return 0;
}
