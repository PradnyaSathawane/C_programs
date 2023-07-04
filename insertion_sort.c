#include<stdio.h>
int main()
{
	int i,key, a[10], j;
	for(i-0; i<6; i++)
	{
		scanf("%d\n", &a[i]);
	}
	for(i=1; i<6; i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[i]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	for(i=0; i<6; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
