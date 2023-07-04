#include<stdio.h>
int main()
{
	int a, b, c, x;
	
	printf("Enter values for a: ");
	scanf("%d", &a);
	printf("Enter values for b: ");
	scanf("%d", &b);
	printf("Enter values for c: ");
	scanf("%d", &c);
	
	x=(-(b-c)*(c-a)*(a-b)*(a+b+c));
	printf("a*a*a(b-c)+b*b*b(c-a)+c*c*c(a-b)= %d\n", x);
	return 0;
}
