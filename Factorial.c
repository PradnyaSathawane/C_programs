#include<stdio.h>
int main()
{
	int num, ans=1;
	printf("Enter number:");//5
	scanf("%d", &num);	//5		  //4		//3		//2		//1		//0
	for(; num>0; num=num/10) //t		  //t		//t		//t		//t		//f
	{
		ans=ans*num;	//1*5	  //5*4		//20*3	//60*2	//120*1
	}					//5		  //20		//60	//120	//120
	printf("%d", ans);
	
	return 0;
}




