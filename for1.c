#include<stdio.h>
int main()
{
	int a, b. c;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	c=a*a-2*a*b+b*b;
	printf("(a-b)2: %d\n",c);
	return 0;
}





#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
//	c=a*a-2*a*b+b*b;
	printf("(a-b)2: %d\n",a*a-2*a*b+b*b);
	return 0;
}
