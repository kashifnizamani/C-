#include <iostream>
using namespace std;
int main()
{
	const int x = 10;
      cout<<x<<endl;
      int y = 20;
      y = y;
      cout<<y<<endl;
      y = --y;
      cout<<y;
return 0;

}
