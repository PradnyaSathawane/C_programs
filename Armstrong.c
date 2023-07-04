#include<stdio.h>
int main()
{
	int num, rem, ans=0, Original;
	printf("enter number:");
	scanf("%d", &num);
	Original==num;
	for(; num>0; num=num/10)
	{
		rem=num%10;
		ans=ans+(rem*rem*rem);
		
	}
	printf("%d", ans);
	if(Original==ans)
	{
		printf("\n It is an armstrong number.");
	}
	else
	{
		printf("\n It is not an armstrong number.");
	}

	return 0;
}




