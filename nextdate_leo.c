#include<stdio.h>
int main()
{
	int d, m, y;
	printf("Enter date: ");
	scanf("%d", &d);
	printf("Enter month: ");
	scanf("%d", &m);
	printf("Enter year: ");
	scanf("%d", &y);
	
	if(m>0 && m<=12)
	{
	
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
		{
			if(d>0 && d<=31)
			{
				if(d>0 && d<31)
				{
					d=d+1;
				}
				else
				{
					d=1;
					m=m+1;
				}	
			}
			else
			{
				printf("\nPlease enter valid date.");
			}
		}
		else if(m==4 || m==6 || m==9 || m==11)
		{
			if(d>0 && d<=30)
			{
				if(d>0 && d<=29)
				{
					d=d+1;
				}
				else
				{
					d=1;
					m=m+1;
				}
			}
			else
			{
				printf("\nPlease enter valid date.");
				
			}
		}
		else if(m==2)
		{
			if(d>0 && d<=28)
			{
				if(d>0 && d<=27)
				{
					d=d+1;
					
				}
				else
				{
					d=1;
					m=+1;
				}
			}
			else
			{
				printf("\nPlease enter valid date.");
			}
		}
		else
		{
			if(d>0 && d<=31)
			{
				if(d>0 && d<=30)
				{
					d=+1;
					
				}
				else
				{
					d=1;
					m=+1;
					y=+1;
				}
			}
			else
			{
				printf("\nPlease enter valid date.");
			}
		}
	}
	else
	{
		printf("\nPlease enter valid month.");
	}
	if(((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>0 && d<=31)) || ((m==4 || m==6 || m==9 || m==11) && (d>0 && d<=30)) || ((m==2) && (d>0 && d<=28)))
	{
		printf("\nThe next date is: ");
		printf("\n%d-%d-%d", d, m, y);
	}
	else
	{
		printf("\nThis date doesn't exist.");
	}
	
	return 0;
}
