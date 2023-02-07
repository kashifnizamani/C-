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
