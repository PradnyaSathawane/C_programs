#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter value a: \n");
	scanf("%d", &a);
	printf("Enter value b: \n");
	scanf("%d", b);
	c=((a-b)*(a-b))+2*a*b;
	printf("a2+b2= %d", c);
	return 0;
}




