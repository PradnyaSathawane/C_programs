//

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any number: ");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\na is oldest .");
		}
		else
		{
			printf("\nc is oldest .");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nb is oldest.");
		}
		else
		{
			printf("\nc is oldest.");
		}
	}
	
	
}
