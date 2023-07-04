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
	
	x=(-(b-c)*(c-a)*(a-b)*(b+c)*(c+a)*(a+b));
	printf("(b2c2(b2-c2)+c2a2(c2-a2)+a2b2(a2-b2)= %d\n", x);
	return 0;
}
