#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num%5==0)
	{
		printf("\n%d is divisible by 5.", num);
	}
	else
	{
		printf("\nNumber is not divisible by 5.");
	}
	if(num%11==0)
	{
		printf("\n%d is divisible by 11.", num);
	}
	else
	{
		printf("\nNumber is not divisible by 11.");
	}
	if(num%15==0)
	{
		printf("\n%d is divisible by 15.", num);
	}
	else
	{
		printf("\nNumber is not divisible by 15.");
	}
	return 0;
}


