#include<stdio.h>
int main()
{
	int i, count=0;
	char string[10];
	printf("Enter string: ");
	gets(string);
	for(i=0; string[i]!='\0'; i++)
	{
		count++;
	}
	printf("\nThe length of string is: %d", count);
	return 0;
}


