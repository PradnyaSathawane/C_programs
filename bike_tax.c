#include<stdio.h>
int main()
{
	float Rs, tax, total;
	printf("Enter price of bike:");
	scanf("%f", &Rs);
	if(Rs>100000)
	{
		tax=Rs*0.15;
	}
	else if(Rs>50000 && Rs<=100000)
	{
		tax=Rs*0.10;
	}
	else
	{
		tax=Rs*0.05;
	}
	total = Rs+tax;
	printf("Your total price is %.1f with tax included of %.1f.", total, tax);
	return 0;
}
	
	
	
