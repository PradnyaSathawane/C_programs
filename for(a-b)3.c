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
	d=(a*a*a)-(3*(a*a)*b)+(3*a*(b*b))-(b*b*b);
	printf("(a-b)3: %d\n", d);
	return 0;
}

