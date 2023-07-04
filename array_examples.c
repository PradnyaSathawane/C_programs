/*#include<stdio.h>
void main()
{
	int arr[10];
	int i, even, odd;
	printf("Enter values in array: ");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n Elements in array are: ");
	for(i=0; i<10; i++)
	{
		printf(" %d", arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	
	printf("\nEven Count is: %d",even);
	printf("\n Odd count is: %d",odd);
	
}*/






#include<stdio.h>
void main()
{
	int arr[10];
	int i, j=0, k=0, even[5], odd[5];
	printf("Enter values in array: ");
	for(i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n Elements in array are: ");
	for(i=0; i<10; i++)
	{
		printf(" %d", arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;	
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	printf("\n even elements in array are: ");
	for(j=0; j<5; j++)
	{
		printf(" %d", even[j]);
	}
	printf("\n odd elements in array are: ");
	for(k=0; k<5; k++)
	{
		printf(" %d", odd[k]);
	}
}





/*#include<stdio.h>
void main()
{
	int arr[6]={1, 3, 4, 2, 6, 5};
	int i, j;
	
	printf("\n Elements in array are: ");
	for(i=0; i<6; i++)
	{
		printf(" %d", arr[i]);
	}
	for(i=0, j=5; i<j; i++, j--)
	{
		int temp;
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		
	}
	printf("\nArray in reverse order: ");
	for(i=0; i<6; i++)
	{
		printf("%d", arr[i]);
	}
}*/
