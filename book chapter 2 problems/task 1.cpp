/**1. Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.*/
#include <iostream>
using namespace std;
int main()
{
    double x,y;
    cout<<"enter the number of gallons: ";
    cin>>x;
    y = x/7.481;
    cout<<x<<" gallons are equal to "<<y<<" cubic feet";
    return 0;
}
