#include<stdio.h>
#include<string.h>
void main()
{
	int vote;
	printf("\n\t\t||----------WELCOME----------||\n\n");
	printf("\t   **********Voting for President***********\n\n");
	
	printf("\nNomiess are: \n\n");
	printf("\n1.Tanushree. \n2.Pradnya. \n3.Yash. \n4.Riya. \n5.Astha.");
	printf("\n\nEnter your vote:\n");
	scanf("%d", &vote);
	switch(vote)
	{
		case 1:
			printf("\nTanushree.");
			break;
		case 2:
			printf("\nPradnya.");
			break;
		case 3:
			printf("\nYash.");
			break;
		case 4:
			printf("\nRiya.");
			break;
		case 5:
			printf("\nAastha.");
			break;
			
	}
}
