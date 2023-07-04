#include<stdio.h>
int main()
{
	float pi=3.1452, volu, r, h;
	printf("enter value of r= ");
	scanf("%f",&r);
	printf("enter value of h= ");
	scanf("%f",&h);
	
	volu=(pi*r*r*h)/3;
	printf("Volume of cone: %f\n",volu);
	return 0;
}
