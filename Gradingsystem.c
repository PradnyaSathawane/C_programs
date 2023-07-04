#include<stdio.h>
void main()
{
	float per;
	char grade;
	printf("Enter your percentage: ");
	scanf("%f", &per);
	
	if(per>=75)
	{
		printf("\nGrade = 'A'");
	}
	else if(per>=60 && per<=74)
	{
		printf("\nGrade = 'B'");
	}
	else if(per>=45 && per<=59)
	{
		printf("\nGrade = 'C'");

	}
	else
	{
		printf("\nGrade = 'F'");
	}

}
