#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter value for a: ");
	scanf("%d", &a);
	printf("Enter value for b: ");
	scanf("%d", &b);
	printf("Values Before swapping: a=%d, b=%d", a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nValue After swapping: a=%d, b=%d", a,b);
	return 0;
}
