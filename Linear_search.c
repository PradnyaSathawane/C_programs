#include<stdio.h>
int main()
{
	int i, a[10], p;
	printf("\nEnter numbers for in array: ");
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter number to search: ");
	scanf("%d", &p);
	for(i=0; i<10; i++)
	{
		if(a[1]==p)
		{
			printf("\n %d is present in array.", p);
			break;
		}
	}
		if(a[i]=!p)
		{
			printf("\n %d is not present in array.", p);
		}
	
	return 0;
}





