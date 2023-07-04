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
	
	x=(-(b-c)*(c-a)*(a-b));
	printf("bc(b-c)+ca(c-a)+ab(a-b)= %d\n", x);
	return 0;
}
