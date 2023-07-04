#include<stdio.h>
int main()
{
	int a, b, x, d;
	
	printf("Enter values for a: ");
	scanf("%d", &a);
	printf("Enter values for b: ");
	scanf("%d", &b);
	printf("Enter values for x: ");
	scanf("%d", &x);
	
	d=((x*x)-((b-a)*x)+(a*b));
	printf("(x-a)(x-b): %d\n", d);
	return 0;
}
