#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter sides of triangle:");
	scanf("%s%d%d", &s1, &s2, &s3);
	if(s1==s2 && s1==s3)
	{
		printf("It is an equilateral triangle.");
		
	}
	else if(s1!=s2 && s1!=s3)
	{
		printf("It is scalene triangle.");
		
	}
	else
	{
		printf("It is isoceles triangle.");
	}
	return 0;
}
