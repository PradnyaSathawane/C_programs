#include<stdio.h>
void main()
{
	int a, b, c, e, f, r;
	printf("Enter the values for: ");
	scanf("%d%d", &a,&b);
	c=a+b;
	e=a-b;
	f=a*b;
	r=a/b;
	printf("Ans= %d", c);
	printf("\nAns= %d", e);
	printf("\nAns= %d", f);
	printf("\nAns= %d", r);
	
	return 0;
}
