#include<stdio.h>
int main()
{
	int a[3][3],b[3][3], j, i, ans[3][3];
	printf("\nEnter value for first matrix: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter value for second matrix: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			ans[i][j]=a[i][j]+b[i][j];
		}
    }
    for(i=0; i<3; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		printf("%d", ans[i][j]);
		}
		printf("\n");
	}
    return 0;

}
