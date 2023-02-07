#include<iostream>
#include <iomanip>

using namespace std;

int main(){
	cout <<  setiosflags(ios::left) << setw(12) << "Last name" << setw(14) << "First name" << setw(17) << "Street address" << setw(12) << "Town" << setw(5) << "State" << endl;
	cout << setfill('.') << setw(60) << "." ;  
	cout << endl << setfill(' ')   << setw(12) << "Jones" << setw(14) << "Bernard" << setw(17) << "109 Pine Lane" << setw(12) << "Littletown" << setw(5) << "MI" << endl;
	cout << setw(12) << "O'Brian" << setw(14) << "Coleen" << setw(17) << "42 E. 99th Ave." << setw(12) << "Bigcity" << setw(5) << "NY" << endl;
	cout << setw(12) << "Wong" << setw(14) << "Harry" << setw(17) << "121-A Alabama St." << setw(12) << "Lakeville" << setw(5) << "IL" << endl;
	
	return 0;
}
