/*Write a program in C to read 10 numbers from the keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000*/


#include<stdio.h>
int main()
{
	int i, num, sum=0, avg;
	printf("enter 10 numbers: ");
	
	for(i=1; i<=10; i++)
	{
		scanf("%d\n", &num);
		sum+=num;
	}
	
	
	avg=sum/10;
	printf("%d\n%d", sum, avg);
	
	return 0;
}
