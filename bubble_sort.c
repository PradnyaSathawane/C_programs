 #include<stdio.h>
 int main()
 {
 	int i, arr[10]={10, 38, 56, 3, 58, 29, 18, 71, 8, 15}, j, z, temp;
 	for(z=0; z<10; z++)
 	
 	for(i=0, j=1; i<=9; i++, j++)
 	{
 		if(arr[i]>arr[j])
 		{
 			temp=arr[i];
 			arr[i]=arr[j];
 			arr[j]=temp;
		 }
	}
	for(i=0; i<10; i++)
	{
 		printf("%d\n", arr[i]);
   }
 	return 0;
 }
 
 
 
