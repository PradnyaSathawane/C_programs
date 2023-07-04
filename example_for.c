#include<stdio.h>
int main()
{
	int num[10], i, ans=0, ans2=0;
	for(i=0; i<10; i++)
	{
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<10; i++)
	{
		if(num[i]%2==0)
		{
			ans=ans+num[i];
		}
		else
		{
			ans2+=num[i];
		}
	}
	printf("\n%d", ans);
	return 0;
}


