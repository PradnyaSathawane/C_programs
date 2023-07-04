#include<stdio.h>
void main()
{
	int age, price, day, month, year;
	char name[20], source[10], destination[10], gender;
	printf("Enter your name: ");
	gets(name);
	printf("\nEnter your source: ");
	gets(source);
	printf("\nEnter your destination:");
	gets(destination);
	printf("\nEnter your age: ");
	scanf("%d", &age);
	printf("\nEnter your gender: ");
	scanf("%s", &gender);
	printf("\nEnter the day:");
	scanf("%d", &day);
	printf("\nEnter month: ");
	scanf("%d", &month);
	printf("\nEnter year: ");
	scanf("%d", &year);
	printf("\nEnter price: ");
	scanf("%d", &price);
	
	printf("\n\n\n\n||---------------INDIAN RAILWAY---------------||\n\n\n\n");
	printf("\nSource: %s \t\t\t Destination: %s \n\n", source, destination);
	printf("\nName: %s \t\t\t  Age: %d \n\n", name, age);
	printf("\nGender: %c \t\t\t\t Date: %d-%d-%d\n", gender, day, month, year);
	printf("\n\n\n Travelling ticket price: %d\n", price);
	printf("\n\n\n\n||----------HAPPY JOURNEY----------||\n\n\n\n");
	}
	
	

