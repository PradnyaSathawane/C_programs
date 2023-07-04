/*#include<stdio.h>
void main()
{
	int num, a,b, sum=0;
	printf("enter = %d", num);
	scanf("%d", &num);
	a=num%10;
	sum=sum+a;
	num=num/10;
	
	printf("ans= %d", sum);
}*/

#include<stdio.h>
void main()
{
	int num, a,b, sum=0;
	printf("enter = %d", num);
	scanf("%d", &num);
	while(num>0)
	{
	
	a=num%10;
	sum=sum+a;
	num=num/10;
}
	printf("ans= %d", sum);
}


