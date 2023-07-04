#include<stdio.h>
int main()
{
	int mon, date;
	printf("Enter month: ");
	scanf("%d", &mon);
	printf("Enter date: ");
	scanf("%d", &date);
	if((mon==12 && date>0 && date<=31) || (mon==1 && date>0 && date<=31) || (mon==2 && date>0 && date<=28))
	{
		printf("\n Season = Winter.");
	}
	else if((mon==3 && date>0 && date<=31) || (mon==4 && date>0 && date<=30) || (mon==5 && date>0 && date<=31))
	{
		printf("\n Season = Summer.");
	}
	else if((mon==6 && date>0 && date<=30) || (mon==7 && date>0 && date<=31) || (mon==8 && date>0 && date<=31))
	{
		printf("\n Season = Rainy.");
	}
	else if((mon==9 && date>0 && date<=30) || (mon==10 && date>0 && date<=31) || (mon==11 && date>0 && date<=30))
	{
		printf("\n Season = Autumn.");
	}
	else
	{
		printf("\n Invalid date or month.");
	}
	return 0;
}


