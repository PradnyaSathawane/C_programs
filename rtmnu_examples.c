/*#include<stdio.h>
void main()
{
	int p, m;
math:
	printf("\nApplied mathematics:");
	scanf("%d", &m);
	if(m<=0 || m>70)
	{
		printf("\nInvalid");
		goto math;
	}
	phy:
	printf("\nApplied physics:");
	scanf("%d", &p);
	if(p<=0 || p>70)
	{
		printf("\nInvalid");
		goto phy;
	}
	
}
#include<stdio.h>
void main()
{
	int f;

	printf("| Sr. |\t\t\tSUBJECT \t\t\t\t|\t\tMARKS \t\t|\t\tOBTAINED MARKS\t\t| REMARKS |\n");
	printf("| NO. |\t\t\tNAME\t\t\t| THEORY.MAX |  PRAC.MAX | TOTAL | THEORY.OBT | PRAC.OBT  | (GRADE) |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("| 1. | Applied Mathematics-1                |    70      |	30		 |	100  |	 		|		   |		 |\n");
	printf("| 2. | Engineering Physics (Theory)         |    70      |	 		 |	  	 |      	|		   |		 |\n");
	printf("| 3. | Engineering Physics (Practical)      |            |	30 		 |	100  |	   		|		   |		 |\n");
	printf("| 4. | Engineering Chemistry (Theory)       |    70      |	 		 |	  	 |	  	|		   |		 |\n");
	printf("| 5. | Engineering Chemistry (Practical)    |            |	30 		 |	100  |	   		|		   |		 |\n");
	printf("| 6. | Electrical Engineering (Theory)      |    70      |	 		 |	  	 |	   	|		   |		 |\n");
	printf("| 7. | Electrical Engineering (Practical)   |            |	30 		 |	100  |	   		|		   |		 |\n");
	printf("| 8. | Basic Civil Engineering              |    70      |	 30		 |	100	 |	   		|		   |		 |\n");
	while(f<150)
	{
		printf("-");
		f++;
	}
	
}*/




#include<stdio.h>
int main()
{
	float per;
	char grade, result[6];
	printf("Enter your percentage: ");
	scanf("%f", &per);
	
	if(per>=75)
	{
		printf("\nGrade = 'A'");
	}
	else if(per>=60 && per<=74)
	{
		printf("\nGrade = 'B'");
	}
	else if(per>=45 && per<=59)
	{
		printf("\nGrade = 'C'");

	}
	else
	{
		printf("\nGrade = 'D'");
	}

	if(per>45)
	{
		printf("\n|            RESULT : PASS                                                                                                       |");
	}
	else
	{
		printf("\n|            RESULT : FAIL                                                                                                       |");
	}
	
	
	return 0;
	
}
