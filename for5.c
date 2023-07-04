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
	d=(a+b+c)*(a+b+c)-2*(a*b+b*c+c*a);
	printf("(a2+b2+c2): %d\n", d);
	return 0;
}
