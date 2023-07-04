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
	d=0.5*(a+b+c)*(((a-b)*(a-b))+((b-c)*(b-c))+((c-a)*(c-a)));
	printf("a3+b3+c3-3abc: %d\n", d);
	return 0;
}
