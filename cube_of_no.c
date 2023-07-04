#include<stdio.h>
int main()
{
	int i, b;
	printf("\nenter number:");
	scanf("%d", &b);
	for(i=1; i<=b; i++)
	{
		printf("%d", i*i*i);
	}

	return 0;
}


