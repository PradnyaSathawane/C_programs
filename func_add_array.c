#include<stdio.h>
void add(int*);

int main()
{
	int i, arr[6]={2, 5, 34, 12, 10, 8};
	add(&arr[i]);
	return 0;
}
void add(int *sum)
{
	int i, *a;
	for(i=0; i<6; i++)
	{
		sum=sum+(*a[i]);
	}
	printf("%d\n", sum);
}

