#include<stdio.h>
void main()
{
	float m1,m2,m3,total,per;
	char grade;
	printf("Enter marks of sub: ");
	scanf("%f%f%f", &m1, &m2, &m3);
	total=m1+m2+m3;
	per=total/4.0;
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



