/*#include<stdio.h>
void main()
{ 
	int arr[3][2];
	int i, j;
	printf("Enter values in array: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		
	 } 
	 printf("\nValues inside arrays:\n");
	 for(i=0; i<3; i++)
	 {
	 	for(j=0; j<2; j++)
	 	printf("%d ", arr[i][j]);
	 	printf("\n");
	 }
}*/



//Sum of array.

/*#include<stdio.h>
void main()
{ 
	int arr[5];
	int i, sum=0;
	printf("Enter values in array: ");
	for(i=0; i<5; i++)
	{
			scanf("%d", &arr[i]);
		    sum=sum+arr[i];
	 } 
	 printf("\nvalues inside array:\n");
	 for(i=0; i<5; i++)
	 {
	 	printf("%d ", arr[i]);
	 }
	 	printf("\nSum of array: %d", sum);
	 
}*/

//Addition of two matrix.

/*#include<stdio.h>
void main()
{
	int matrix1[3][3], matrix2[3][3], result[3][3], i, j;
	
	printf("Enter value of matrix1: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("\nEnter value of matrix2: ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	printf("\nEnter value of matrix1: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter value of matrix2: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", matrix2[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			result[i][j]=matrix1[i][j]+matrix2[i][j];
			
		}
	}
	printf("\nresult matrix is: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", result[i][j]);	
		}
		printf("\n");
	}
}*/

