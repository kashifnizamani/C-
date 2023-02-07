#include<iostream>
using namespace std;
int main(){
	int a, b, c, d;
	char slash;
	cout << "Enter first fraction: ";
	cin >> a >> slash >> b;
	cout << "Enter second fraction: ";
	cin >> c >> slash >> d ;
	if(slash == '/')
{   int numerator = a * d + b * c;
	int denominator = b * d;
	cout << "Sum is: " << numerator << "/" << denominator << endl;}
	else
	cout<<"invalid input please try again ";
	return 0;
}

