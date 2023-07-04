// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years. 
//Ask user for their salary and year of service and print the net bonus amount.

#include<stdio.h>
int main()
{
	int years;
	float sal, ser, bonus, total;
	printf("Enter your salary: \n");
	scanf("%f", &sal);
	printf("Enter your year of service: \n");
	scanf("%f", &years);
	if (years>=5)
	{
		bonus=sal*0.05;
		total= sal+bonus;
		printf("\nyour net bouns is : %f", bonus);
	}
	else
	{
		printf("\nyou are not eligible for bonus.");
	}
	return 0;
}


