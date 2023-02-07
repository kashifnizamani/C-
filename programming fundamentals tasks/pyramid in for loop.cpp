#include <iostream>
using namespace std;
int main()
{
    int i, j, k, space=60;
    
    for (i=0;i<=5;i++)
    {
        for (k=0;k<space;k++)
        {
         cout<<" ";
        }
        for (j=0;j<2*i-1;j++)
        {
                cout<<"*";
        }

        space--;
        cout<<"\n";
    }
    return 0;
    
}





