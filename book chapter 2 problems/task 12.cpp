#include<iostream>

using namespace std;

int main(){ 
 
	float dPounds;
	cout << "Enter Decimal pounds: ";
	cin >> dPounds;

	int pounds = static_cast<int>(dPounds);
	float fracPounds = dPounds - pounds;

	float dShillings =  fracPounds * 20;
	int shillings = static_cast<int>(dShillings);
	float fracShillings = dShillings - shillings;

	int pence = static_cast<int>(fracShillings * 12);
	
	cout << "Equivalent in old notation: " << pounds << "." << shillings << "." << pence;

	cout << endl;
	return 0;
}
