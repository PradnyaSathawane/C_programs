#include<stdio.h>
int main()
{
	int a, total, qua, cost, bill;
	printf("Enter your quantity: ");
	scanf("%f", &qua);

	if (cost>=1000)
	{
		
		printf("\nyour total bill with discount is : %f", total);
	}
	else
	{
		printf("\nYour total bill without discount is: %d.", bill);
	}
	return 0;
}
