#include<stdio.h>
int main()
{
	int num=415, a, b, c, rev=0;
	printf("Number before reversing: %d\n", num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	rev=a*100+b*10+c*1;
	printf("number after reversing: %d", rev);
	return 0;
	
}

