#include<stdio.h>
int main()
{
	int num, a, b;
	printf("7 digit number is: ");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10*num/10;
	printf("\nans= %d", b);
	return 0;
	
}





