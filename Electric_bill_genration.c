#include<stdio.h>
void main()
{
	float totalbill, units;
	printf("Enter units: ");
	scanf("%f", &units);
	if(units>0 && units<=100)
	{
		totalbill=units*3.5;
		totalbill=totalbill-(totalbill*0.2);
		printf("\n Your totalbill with 20%% dicount is: %.2f", totalbill);
	}
	else if(units>100 && units<=150)
	{
		totalbill=units*4.5;
		totalbill=totalbill-(totalbill*0.15);
		printf("\n Your totalbill with 15%% dicount is: %.2f", totalbill);
	}
	else if(units>150 && units<=200)
	{
		totalbill=units*5;
		totalbill=totalbill-(totalbill*0.1);
		printf("\n Your totalbill with 10%% dicount is: %.2f", totalbill);
	}
	else
	{
		totalbill=units*6;
		totalbill=totalbill+300;
		printf("\n Your totalbill with additional service charge is: %.2f", totalbill);
	}
}
