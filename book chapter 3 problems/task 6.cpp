/*6. Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
calculates its factorial, until the user enters 0, at which point it terminates. You can
enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
effect.*/
#include <iostream>
using namespace std;
int main()
{
	int x,y,z,factorial;
	do{
		factorial = 1;
	cout<<"enter a number: ";
	cin>>x;
	for(y = x; y >= 1; y--)
	{
	factorial *= y;
	
	}
	
	cout<<x<<"! = "<<factorial<<endl;
}
    while(x > 0);
	return 0;
}
