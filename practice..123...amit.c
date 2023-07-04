#include<stdio.h>
int main()
{
	int num,rem,tem,tem1,rev=0,count=0;
	scanf("%d",&num);
	tem=num;
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		if(num>0)
		{
			tem1=rem;
		}
		num=num/10;
		count++;
	}
	if(rev==tem)
	{
		printf("Yes\n");
		printf("%d",tem%10+tem1);
	}
	else
	{
		printf("No");
	}
	
	
	return 0;
}
