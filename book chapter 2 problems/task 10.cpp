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
