//Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<stdio.h>
int main()
{
	int len, breadth;
	printf("enter length= ");
	scanf("%d", &len);
	printf("\nenter breadth= ");
	scanf("%d", &breadth);
	if(len==breadth)
	{
		printf("\nit is a Square.");
	}
	else
	{
		printf("\nit is not a square,");
	}
	return 0;
}
