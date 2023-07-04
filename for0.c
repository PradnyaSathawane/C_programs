#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	c=a*a+2*(a)*(b)+b*b;
	printf("(a+b)2: %d\n",c);
	return 0;
}
