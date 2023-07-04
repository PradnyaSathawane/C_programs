#include<stdio.h>
int main()
{
	float pi=3.1452, volu, r, h;
	printf("enter value of r= ");
	scanf("%f", &r);
	printf("enter value of h= ");
	scanf("%f", &h);
	
	volu=pi*r*r*h;
	printf("Volume of cylinder: %f\n",volu);
	return 0;
}
