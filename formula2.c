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
	
	x=((b-c)*(c-a)*(a-b));
	printf("a(b*b-c*c)+b(c*c-a*a)+c(a*a-b*b)= %d\n", x);
	return 0;
}
