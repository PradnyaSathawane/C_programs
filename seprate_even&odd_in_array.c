#include<stdio.h>
int main()
{
	int p[10], a[10], v[10], n, h, t;
	printf("\nEnter numbers in array: ");
	for(n=0; n<10; n++)
	{
		scanf("%d", &p[n]);
	}
	for(n=0; n<10; n++)
	{
		if(p[n]%2==0)
		{
			a[h]=p[n];
			h++;
		}
		else
		{
			v[t]=p[n];
			t++;
		}
	}
	for(n=0; n<10; n++)
	{
		printf("%d\n", a[h]);
	}
	for(n=0; n<10; n++)
	{
		printf("%d\n", v[t]);
	}
	return 0;
}
