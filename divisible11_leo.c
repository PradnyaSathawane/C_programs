#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num%11==0)
	{
		printf("\n%d is divisible by 11.", num);
	}
	else
	{
		printf("\nNumber is not divisible by 11.");
	}
	
	return 0;
}
