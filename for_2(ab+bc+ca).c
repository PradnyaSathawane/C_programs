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
	d=(a+b+c)*(a+b+c)-(a*a+b*b+c*c);
	printf("2(ab+bc+ca): %d\n", d);
	return 0;
}
