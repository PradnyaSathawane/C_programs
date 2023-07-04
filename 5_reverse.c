#include<stdio.h>
int main()
{
	int num=71544, a, b, c, d, e, rev=0;
	printf("Number before reversing: %d\n", num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	d=num%10;
	num=num/10;
	e=num%10;
	num=num/10;
	rev=a*10000+b*1000+c*100+d*10+e*1;
	printf("number after reversing: %d", rev);
	return 0;
	
}



