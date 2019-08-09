#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int n,i;
	cout<<"\n : Program to print the given figures for a value of n :\n";
	cout<<setw(78)<<setfill('*');
	cout<<"  "<<endl<<"  Enter Number of lines to be printed: ";
	cin>>n;
	if(n<1)
		cout<<"  Invalid Input";
	else
	{
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"  ";
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	}
	getch();
}
