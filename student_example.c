#include<stdio.h>
void main()
{
	int costprice, totalprice;
	char ans;
	printf("Enter costprice: ");
	scanf("%d", &costprice);
	printf("\nAre you a student? Y/N: ");
	scanf("%c", &ans);
	scanf("%c", &ans);
	if(costprice>500 && ans=='Y')
	{
		totalprice=costprice-(costprice*0.1);
		printf("\nYour totalprice with 10%% discount is: %d", totalprice);
	}
	else
	{
		totalprice=costprice-(costprice*0.05);
		printf("\nYour totalprice with 5%% discount is: %d", totalprice);
	}
}
