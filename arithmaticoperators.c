#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	float f;
	printf("Enter two values: "\n);
	scanf("a=%d b=%d", &a, &b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("c=%d", c);
	printf("\nd=%d", d);
	printf("\ne=%d", e);
	printf("\nf=%d", f);
	return 0;
}
