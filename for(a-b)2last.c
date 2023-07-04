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
	
	x=(((a+b)*(a+b))-4*a*b);
	printf("(a-b)*(a-b)= %d\n", x);
	return 0;
}


