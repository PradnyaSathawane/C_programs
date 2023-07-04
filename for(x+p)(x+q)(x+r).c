#include<stdio.h>
int main()
{
	int p, q, r, x, d;
	
	printf("Enter values for p: ");
	scanf("%d", &p);
	printf("Enter values for q: ");
	scanf("%d", &q);
	printf("Enter values for r: ");
	scanf("%d", &r);
	printf("Enter value for x: ");
	scanf("%d", &x);
	d=((x*x*x)+((p+q+r)*(x*x))+((p*q)+(q*r)+(r*p)*x)+(p*q*r));
	printf("(x+p)(x+q)(x+r): %d\n", d);
	return 0;
}
