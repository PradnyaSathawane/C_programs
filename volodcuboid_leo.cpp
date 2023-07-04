#include<stdio.h>
int main()
{
	int l, b, h, vol;
	printf("enter value of l= ");
	scanf("%d",&l);
	printf("enter value of b= ");
	scanf("%d",&b);
	printf("enter value of h= ");
	scanf("%d",&h);
	vol=l*b*h;
	printf("Volume of Cuboid: %d\n",vol);
	
	return 0;
}
