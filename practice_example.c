/*#include<stdio.h>
void main()
{
	int arr[5], num, flag=0;
	int i;
	printf("Enter values in array: ");
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n Elements in array are: ");
	for(i=0; i<5; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\nEnter element to search: ");
	scanf("%d", &num);
	for(i=0; i<5; i++)
	{
		if(arr[i]==num)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("number is found.");
	}
	else
	{
		printf("number not found.");
	}
}*/




//Accept a array and position and if the result is even then take a square of res and if result is odd take cube of res.


/*#include<stdio.h>
void main()
{
	int arr[5], res, pos;
	int i;
	printf("Enter values in array: ");
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n Elements in array are: ");
	for(i=0; i<5; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\nEnter position of element : ");
	scanf("%d", &pos);
	for(i=0; i<5; i++)
	{
		if((i+1)==pos)
		{
			if(arr[i]%2==0)
			{
				res=arr[i]*arr[i];
				printf("\n Element is even.");
				printf("\n square of even element is %d", res);
				break;
			}
			else
			{
				res=arr[i]*arr[i]*arr[i];
				printf("\n Element is odd.");
				printf("\n Cube of element is %d", res);
			}
		}
		
	}
}*/
