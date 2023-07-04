#include<stdio.h>
void area(int*, int*, int*, int*, int*, int*, int*, int*);

int main()
{
	int len=4, breadth=6, side=4, radius=2, ans1, ans2, ans3, ans4;
	area(&len, &breadth, &side, &radius, &ans2, &ans2, &ans3, &ans4);
	printf("Area of triangle: %d\n Area of square: %d\n Area of rectangle: %d\n Area of circle: %d", ans1, ans2, ans3, ans4);
	return 0;
}

void area(int *l, int *b, int *s, int *r, int *c,  int *d, int *e, int *p) 
{
	*c=(0.5)*(*l)*(*b);
	*d=*s**s;
	*e=*l**b;
	*p=3.1452**r**r;
}



