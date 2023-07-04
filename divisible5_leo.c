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
	
	return 0;
}
