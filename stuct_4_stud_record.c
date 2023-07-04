#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float per;
};

int main()
{
	int i;
	struct student stud[4];
	printf("\nEnter the data of students");
	for(i=0; i<4; i++)
	{
		printf("\nEnter name: ");
		scanf("%s", &stud[i].name);
		printf("\nEnter roll: ");
		scanf("%d", &stud[i].rollno);
		printf("\nEnter percentage: ");
		scanf("%f", &stud[i].per);
	}
	printf("\nStudent record");
	for(i=0; i<4; i++)
	{
		printf("\n\nName: %s", stud[i].name);
		printf("\n\nRoll-no: %d", stud[i].rollno);
		printf("\n\nPercentage: %f", stud[i].per);
	}
	
	return 0;
}




