#include<stdio.h>
int main()
{
	int num=715104495, a, b, c, d, e, f, g, x, y, rev=0;
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
	x=num%10;
	num=num/10;
	y=num%10;
	num=num/10;
	rev=a*100000000+b*10000000+c*1000000+d*100000+e*10000+f*1000+g*100+x*10+y*1;
	printf("\nNumber after reversing: %d", rev);
	return 0;
	
}
