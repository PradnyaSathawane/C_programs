#include<stdio.h>
int main()
{
	int num=715104495, a;
	printf("9 digit number is: %d", num);
	a=num%10+num/100000000;
	printf("\nans= %d", a);
	return 0;
	
}


