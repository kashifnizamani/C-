/*5. Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
X
XXX
XXXXX
XXXXXXX
XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int space = 20;
    for (int i=0; i<=20; i++)
    {
        for (int j=0; j<space; j++)
        {
         cout<<" ";
        }
        for (int k=0; k<2*i-1; k++)
        {
                cout<<"x";
        }

        space--;        
        cout<<"\n";
    }
    return 0;
    
}





