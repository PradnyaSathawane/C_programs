#include<stdio.h>
void arithmatic(int*, int*, int*, int*, int*, int*, int*);

int main()
{
	int num1=40, num2=10, ans1, ans2, ans3, ans4, ans5;
	arithmatic(&num1, &num2, &ans1, &ans2, &ans3, &ans4, &ans5);
	printf("%d\n%d\n%d\n%d\n%d", ans1, ans2, ans3, ans4, ans5);
	return 0;
}
void arithmatic(int *a, int *b, int *c, int *d, int *q, int *p, int *r)
{
	*c=*a+*b;
	*d=*a-*b;
	*q=*a**b;
	*p=(*a)/(*b);
	*r=*a%*b;
}





/*#incluide<stdio.h
void area(int*, int*, int*, int*, int*);

int main()
{
	
}*/
