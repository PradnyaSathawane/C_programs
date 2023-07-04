#include<stdio.h>
int main()
{
	int a, b, c, d;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	d=((a*a)+(b*b)+(c*c))+2*((a*b)+(b*c)+(c*a));
	printf("(a+b+c)2: %d\n", d);
	return 0;
}
