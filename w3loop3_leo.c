/*Write a program in C to display n terms of natural numbers and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28*/


#include<stdio.h>
int main()
{
	int i, num, sum=0;
	printf("enter value= ");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
		sum+=i;
		
	}
	printf("%d", sum);
	return 0;
}
