#include<stdio.h>
void evenodd(int);

int main()
{
	int i;
	printf("\nEnter any number:");
	scanf("%d", &i);
	evenodd(i);
	return 0;
}
void evenodd(int j)
{

	if(j%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd numnber");
	}
}
	
