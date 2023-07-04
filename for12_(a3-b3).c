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
	d=(a+b)*(a+b)*(a+b)+3*a*b*(a-b);
	printf("a3-b3: %d\n", d);
	return 0;
}
