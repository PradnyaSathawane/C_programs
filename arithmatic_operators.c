#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	float p;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	p=a/b;
	printf("%d", c);
	printf("%d", d);
	printf("%d", e);
	printf("%f", p);
	
	return 0;
}
