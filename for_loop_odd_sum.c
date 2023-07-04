#include<stdio.h>
int main()
{
	int i, a[10], sum=0;
	for (i=0; i<10; i++)
	{
		scanf("%d\n", a[i]);
	}
	for(i=0; i<10; i++)
	{
		if(a[i]%2!=0)
		{
			sum+=a[i];
		}
	}
	printf("\nSum of odd numbers: ", sum);
	return 0;
}
