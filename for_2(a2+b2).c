#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter value a: ");
	scanf("%d", &a);
	printf("Enter value b: ");
	scanf("%d", b);
	c=(((a+b)*(a+b))+((a-b)*(a-b)));
	printf("2(a2+b2)= %d", c);
	return 0;
}



