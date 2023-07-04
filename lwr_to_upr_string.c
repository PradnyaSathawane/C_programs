#include<stdio.h>
int main()
{
	int i;
	char string[30];
	printf("Enter string: ");
	gets(string);
	for(i=0; string[i]!='\0'; i++)
	{
		if(string[i]>=97 && string[i]<=122)
		{
			string[i]-=32;
		}
	}
	puts(string);
	return 0;
	
}



