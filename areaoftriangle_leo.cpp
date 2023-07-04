#include<stdio.h>
int main()
{
	float b, h, t;
	printf("enter value of b= ");
	scanf("%f", &b);
	printf("enter value of h= ");
	scanf("%f", &h);
	t=0.5*b*h;
	printf("Area of Triangle: %f\n",t);
	return 0;
}
