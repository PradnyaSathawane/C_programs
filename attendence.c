#include<stdio.h>
int main()
{
	int total, classes, attend; 
	float per;
	printf("Enter number of classes held: ");
	scanf("%d", &classes);
	printf("Enter no. of attented classes: ");
	scanf("%d", &attend);
	per=attend/total*100;
	printf("percent= %d",per);
	if(per<75)
	{
		printf("student is not allowed to sit in exam.");
	}
	else
	{
		printf("student is allowed to sit in exam.");
	}
	return 0;
}


