#include<stdio.h>
int main()
{
	int i, a[10], sum; 
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<10; i++)
	{
		sum=sum+a[i];
	}
	printf("%d\n", sum);

	
	return 0;
}
