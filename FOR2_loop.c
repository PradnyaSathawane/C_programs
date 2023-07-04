/*#include<stdio.h>
int main()
{
	int i;
	for(i=5; i>=0; i--)
	{
		printf("%d", i);
	}
	return 0;
}*/


/*#include<stdio.h>
void main()
{
	int num=12345, count=0;

	for(; num>0; num=num/10)
	{
		
		count++;
	}
	printf("Total digits are: %d", count);
	
}*/



#include<stdio.h>
int main()
{
	int i, j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d", j+1);
			
		}
		printf("\n");
	}
	return 0;
}
