/*#include<stdio.h>
//int main()
//{
//	
//	int i,j, arr1[10], arr2[10];
//	for(i=0; i<10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
	for(i=9,j=0; i>=0; i--, j++)
	{
		arr2[i]=arr1[j];
	}
	for(i=0; i<10; i++)
	{
		printf("%d\n", arr2[1]);
	}
	return 0;
}*/



#include<stdio.h>
int main()
{
	int a[10], i, j, temp;
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);		//10
	}
	for(i=0, j=9;i<5; i++, j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0; i<10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
