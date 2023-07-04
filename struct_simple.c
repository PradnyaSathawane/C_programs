#include<stdio.h>
struct stud
{
	int rollno;
	char name[20];
	float per;
	
};
int main()
{
	struct stud s1, s2, s3;
	strcpy(s1.name, "Pradnya");
	s1.rollno=122;
	s1.per=87.67;
	strcpy(s2.name, "Hardin");
	s2.rollno=123;
	s2.per=86.56;
	strcpy(s3.name, "Tessa");
	s3.rollno=124;
	s3.per=85.89;
	 
	printf("\nstud1 name: %s", s1.name);
	printf("\nstud1 rollno: %d", s1.rollno);
	printf("\nstud1 percentage: %f", s1.per);
	
	printf("\nstud1 name: %s", s2.name);
	printf("\nstud1 rollno: %d", s2.rollno);
	printf("\nstud1 percentage: %f", s2.per);
	
	printf("\nstud1 name: %s", s3.name);
	printf("\nstud1 rollno: %d", s3.rollno);
	printf("\nstud1 percentage: %f", s3.per);
	
	return 0;
}
