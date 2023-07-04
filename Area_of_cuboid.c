#include<stdio.h>
int main()
{
	int l, b, h, vol;
	printf("Enter length: ");
	scanf("%d", &l);
	printf("Enter breadth: ");
	scanf("%d", &b);
	printf("Enter height: ");
	scanf("%d", &h);
	vol=l*b*h;
	printf("Volume of Cuboid: %d\n",vol);
	return 0;
	
	
}
