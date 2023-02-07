#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int N = 0,S = 0,E = 0,W = 0,prize = 0,choices = 10;
	char c1,x,y,z;
	cout<<"press 'q' to exit"<<endl<<"press 'p' to play game"<<endl;
	cin>>c1;
	if(c1 == 'q' || c1 == 'Q')
	{
		exit(0);
	}
	else if(c1 == 'p' || c1 == 'P')
	{
		while(choices >= 1)
		{
		system("cls");
		cout<<"give directions using E for 'east',W for 'west',S for 'south' and N for 'north'"<<endl;
		cout<<"prizes = "<<prize<<endl<<"choices = "<<choices<<endl;
		
		cout<<"North = "<<N<<" South = "<<S<<" East = "<<E<<" West = "<<W<<endl;
		cout<<"enter any direction: ";
		
		x = getch();
		if(x == 'n' || x== 'N')
		++N;
		if(x == 's'|| x == 'S')
		++S;
		if(x == 'e'|| x == 'E')
		++E;
		if(x == 'w'|| x == 'W')
		++W;
		if(N == 0 && S == 1 && E == 1 && W == 0)
		++prize;
	    if(N == 0 && S == 1 && E == 1 && W == 1)
		++prize;
		if(N == 2 && S == 1 && E == 3 && W == 1)
		++prize;
		if(N == 3 && S == 1 && E == 3 && W == 3)
		{
		++prize;
	}
	
	--choices;
	if (choices <= 0)
   	{
		system("CLS");
     cout<<"***********game over***********"<<endl<<"prizes won = "<<prize<<endl;
     cout<<"do you want to play again Y/N; ";
     cin>>z;
     if(z == 'y' || z == 'Y')
     {
     N = 0;
	 S = 0;
	 E = 0;
	 W = 0;
	 prize = 0;
     choices = 10;
 }
	 else
     exit(0);
	
}
   	
 }
     
	}
	else
	cout<<"invalid input";
	
	
	return 0;
}
