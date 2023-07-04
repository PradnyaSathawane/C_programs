#include<stdio.h>
int main()
{
	int i, ans=0;
	for(i=1; i<=7; i++)
	{
		printf("%d\n", i);
		ans=ans+i;
	}
	printf("\n%d", ans);
	return 0;
}
