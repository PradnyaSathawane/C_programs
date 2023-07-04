#include<stdio.h>
int main()
 {
 	int i, arr[10]={10, 38, 56, 3, 58, 29, 18, 71, 8, 15}, j, temp;
 	
 	for(i=0; i<10; i++)
 	{
 		for(j=i+1; j<10; j++)
 		{
 			if(arr[i]>arr[j])
 			{
 				temp=arr[i];
 				arr[i]=arr[j];
 				arr[j]=temp;
			}
		}
	}
	for(i=0; i<10; i++)
	{
 		printf("%d\t", arr[i]);
    }
 	return 0;
 }
