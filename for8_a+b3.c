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
	d=(a*a*a)+(b*b*b)+(3*a*b)*(a+b);
	printf("(a+b)3: %d\n", d);
	return 0;
}
