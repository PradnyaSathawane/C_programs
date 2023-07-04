#include<stdio.h>
int main()
{
	int i;
	char string[30];
	printf("Enter string: ");
	gets(string);
	for(i=0; string[i]!='\0'; i++)
	{
		if(string[i]>=65 && string[i]<=90)
		{
			string[i]+=32;
		}
	}
	puts(string);
	return 0;
	
}
