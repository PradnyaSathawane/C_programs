#include<stdio.h>
int main()
{
	int i;
	char string[30], string2[30];
	printf("Enter string: ");
	gets(string);
	for(i=0;string[i]!='\0'; ++i)
	{
		string2[i]=string[i];
	}
	
	puts(string2);
	return 0;
}


