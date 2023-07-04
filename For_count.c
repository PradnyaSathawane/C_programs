/*#include<stdio.h>
int main()
{
	int a=12345, ans=0, rem;
	for(;a>0; a=a/10)  //12345	//1234	//123	//12	//1		//0= condition false.
	{
		rem=a%10;      //5		//4		//3		2		//1
		ans=ans+rem;  //0+5=5	//5+4=9 //12	//14	//15
	}
	printf("%d", ans);
}*/



/*#include<stdio.h>
int main()
{
	int num=12345, ans=0, rem;
	while(num>0)  
	{
		rem=num%10;
		ans=ans+rem;
		//rem=num/10; 
		  
	}
	printf("%d", ans);
}*/


#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<3;i++)  
	{
		for(j=0;j>i;j++)
		{
			printf("%d", j);
		}
		 printf("\n") ;
	}
	return 0;
	
}


