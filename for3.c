#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	c=(a+b)*(a+b)-2*a*b;
	printf("a2+b2: %d\n", c);
	return 0;
}
