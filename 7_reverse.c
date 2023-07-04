#include<stdio.h>
int main()
{
	int num=7151044, a, b, c, d, e, f, g, rev=0;
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
	f=num%10;
	num=num/10;
	g=num%10;
	num=num/10;
	rev=a*1000000+b*100000+c*10000+d*1000+e*100+f*10+g*1;
	printf("\nnumber after reversing: %d", rev);
	return 0;
}
