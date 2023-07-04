#include<iostream>
using namespace std;
int main()
{
	int mon, date;
	cout<<"Enter month: ";
	cin>>mon;
	cout<<"Enter date: ";
	cin>>date;
	if((mon==12 && date>0 && date<=31) || (mon==1 && date>0 && date<=31) || (mon==2 && date>0 && date<=28))
	{
		cout<<"\n Season = Winter.";
	}
	else if((mon==3 && date>0 && date<=31) || (mon==4 && date>0 && date<=30) || (mon==5 && date>0 && date<=31))
	{
		cout<<"\n Season = Summer.";
	}
	else if((mon==6 && date>0 && date<=30) || (mon==7 && date>0 && date<=31) || (mon==8 && date>0 && date<=31))
	{
		cout<<"\n Season = Rainy.";
	}
	else if((mon==9 && date>0 && date<=30) || (mon==10 && date>0 && date<=31) || (mon==11 && date>0 && date<=30))
	{
		cout<<"\n Season = Autumn.";
	}
	else
	{
		cout<<"\n Invalid date or month.";
	}
	return 0;
}
