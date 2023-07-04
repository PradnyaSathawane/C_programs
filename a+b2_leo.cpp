#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter value: ");
	scanf("%d%d", &a, &b);
	c=(a*a)+(b*b)+2*(a*b);
	printf("(a+b)2= %d", c);
	
	return 0;
}
