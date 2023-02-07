#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x,count = 0,num;
	cout<<"enter a number: ";
	cin>>num;
	for(x = 1; x <= 200; x++)
	{
	cout<<setw(4)<<num*x<<" ";
	count++;
	if(count == 10)
	{
		cout<<endl;
		count = 0;
	}
}
	return 0;
}
