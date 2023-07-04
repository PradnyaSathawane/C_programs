#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	c=((a+b)*(a+b))-((a-b)*(a-b));
	printf("4ab: %d\n", c);
	return 0;
}
