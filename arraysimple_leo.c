#include<stdio.h>
int main()
{
	int i, a[10];
	printf("Enter values in array: ");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("values are: ");
	for(i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}


