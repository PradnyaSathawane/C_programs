#include<stdio.h>
int main()
{
	int i, j, k, s;
	s=5+4-1;
	for(i=0; i<5; i++)
	{
		for(k=s; k>=1; k--)
		{
			printf(" ");
		}
		for(j=0; j<=i; j++)
		{
			printf("%d ", i+1);
		}
		printf("\n");
		s--;
	}
	
	return 0;
}
