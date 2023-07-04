#include<stdio.h>

void main()
{
	int rollno, enroll, sem, clg_code, m,c, civil, chem, p, civ, ee, f, g, p_pra, c_pra, ec_pra;
	int total, mi, civI, M, P, C, CIV, EE, t1, t2;
	char name[20], mother_name[10], clg_name[20], medium[10], branch[20], res, grade, m_grade, c_grade, p_grade, civ_grade, ee_grade, s, s1, s2, s3, s4, v, v1, v2, v3, v4;
	
	float per;
	printf("\n\n------------------------------------------------------------------------------------------------------------------------");
	printf("\n\nEnter your name: ");
	gets(name);
	printf("\nEnter your Roll_no: ");
	scanf("%d", &rollno);
	printf("\nEnter your Enrollment_no: ");
	scanf("%d", &enroll);
	printf("\nEnter your Mother name: ");
	scanf("%s", &mother_name);
	printf("\nEnter your Semester: ");
	scanf("%d", &sem);
	printf("\nEnter your college code: ");
	scanf("%d", &clg_code);
	printf("\nEnter your college name: ");
	scanf("%s", &clg_name);
	printf("\nEnter your Medium: ");
	scanf("%s", &medium);
	printf("\nEnter your Branch: ");
	scanf("%s", &branch);
	printf("\n--------------------------------------------------------------------------------------------------------------------------------------");
	printf("\nEnter marks for theory paper.\n");
	math:
	printf("\nApplied mathematics:");
		 scanf("%d", &m);
	   	if(m<0 || m>70)
		{
			printf("\nInvalid");
			goto math;
		}
	phy:	
		printf("\nPhysics: ");
		scanf("%d", &p);
		if(p<0 || p>70)
		{
			printf("\nInvalid");
			goto phy;
		}
	chem:
	printf("\nchemistry: ");
	scanf("%d", &c);
	if(c<0 || c>70)
	{
		printf("\nInvalid");
		goto chem;
	}
	civ:
		printf("\ncivil: ");
		scanf("%d", &civil);
		if(civil<0 || civil>70)
		{
			printf("\nInvalid");
			goto civ;
		}
		
	electric:
		printf("\nElectrical Engineering: ");
		scanf("%d", &ee);
		if(ee<0 || ee>70)
		{
			printf("\nInvalid");
			goto electric;
		}
	while(g<130)
	{
		printf("-");
		g++;
	}
	printf("\nEnter marks for  Internals or practical paper:  ");
	math_internal:
	printf("\nApplied mathematics internal marks:");
		 scanf("%d", &mi);
	   	if(mi<0 || mi>30)
		{
			printf("\nInvalid");
			goto math_internal;
		}
	phypractical:
		printf("\nPhysics Practical marks: ");
		scanf("%d", &p_pra);
		if(p_pra<0 || p_pra>30)
		{
			printf("\nInvalid");
			goto phypractical;
		}
	chempractical:
		printf("\nChemsitry Practical marks: ");
		scanf("%d", &c_pra);
		if(c_pra<0 || c_pra>30)
		{
			printf("\nInvalid");
			goto chempractical;
		}
		civ_internal:
		printf("\ncivil internal marks: ");
		scanf("%d", &civI);
		if(civI<0 || civI>30)
		{
			printf("\nInvalid");
			goto civ_internal;
		}
	elecpractical:
		printf("\nElectrical Engineering Practical marks: ");
		scanf("%d", &ec_pra);
		if(ec_pra<0 || ec_pra>30)
		{
			printf("\nInvalid");
			goto elecpractical;
		}


	M=m+mi;
	C=c+c_pra;
	P=p+p_pra;
	CIV=civil+civI;
	EE=ee+ec_pra;
	
	
	total=M+P+C+CIV+EE;
	per=(total*100)/500;
	
	t1=m+c+p+civil+ee;
	t2=mi+c_pra+p_pra+civI+ec_pra;
	
	if(M>=85)
	{
  		m_grade='A';
  	}
 	else if(M>70 && M<85)
 	{
  		m_grade='B';
  	}
  	else if(M>60 && M<71)
  	{
 	 	m_grade='C';
 	}
  	else if(M>45 && M<61)
 	{
		m_grade='D';
	}
  	else
  	{
  		m_grade='E';
	}
	
	if(P>=85)
	{
  		p_grade='A';
  	}
 	else if(P>70 && P<85)
 	{
  		p_grade='B';
  	}
  	else if(P>60 && P<71)
  	{
 	 	p_grade='C';
 	}
  	else if(P>45 && P<61)
 	{
		p_grade='D';
	}
  	else
  	{
  		p_grade='E';
	}
	
	if(C>=85)
	{
  		c_grade='A';
  	}
 	else if(C>70 && C<85)
 	{
  		c_grade='B';
  	}
  	else if(C>60 && C<71)
  	{
 	 	c_grade='C';
 	}
  	else if(C>45 && C<61)
 	{
		c_grade='D';
	}
  	else
  	{
  		c_grade='E';
	}
	
	if(EE>=85)
	{
  		ee_grade='A';
  	}
 	else if(EE>70 && EE<85)
 	{
  		ee_grade='B';
  	}
  	else if(EE>60 && EE<71)
  	{
 	 	ee_grade='C';
 	}
  	else if(EE>45 && EE<61)
 	{
		ee_grade='D';
	}
  	else
  	{
  		ee_grade='E';
	}
	
	if(CIV>=85)
	{
  		civ_grade='A';
  	}
 	else if(CIV>70 && CIV<85)
 	{
  		civ_grade='B';
  	}
  	else if(CIV>60 && CIV<71)
  	{
 	 	civ_grade='C';
 	}
  	else if(CIV>45 && CIV<61)
 	{
		civ_grade='D';
	}
  	else
  	{
  		civ_grade='E';
	}
	
	if(m<=25)
	{
		s='*';
	}
	else
	{
		s=' ';
	}
	if(p<=25)
	{
		s1='*';
	}
	else
	{
		s1=' ';
	}
	if(c<=25)
	{
		s2='*';
	}
	else
	{
		s2=' ';
	}
	if(civil<=25)
	{
		s3='*';
	}
	else
	{
		s3=' ';
	}
	if(ee<=25)
	{
		s4='*';
	}
	else
	{
		s4=' ';
	}
	if(mi<=12)
	{
		v='*';
	}
	else
	{
		v=' ';
	}
	if(p_pra<=12)
	{
		v1='*';
	}
	else
	{
		v1=' ';
	}
	if(c_pra<=12)
	{
		v2='*';
	}
	else
	{
		v2=' ';
	}
	if(civI<=12)
	{
		v3='*';
	}
	else
	{
		v3=' ';
	}
	if(ec_pra<=12)
	{
		v4='*';
	}
	else
	{
		v4=' ';
	}
	
		
	printf("\n*********************************************************************************************************************************");
	printf("\n|                                          RASHTRASANT TUKDOJI MAHARAJ NAGPUR UNIVERSITY                                         |");
	printf("\n|                                                 Faculty of science and technology                                              |");
	printf("\n|                                               The degree of bachelor of technology                                             |");
	printf("\n**********************************************************************************************************************************");
	printf("\nSTUDENT NAME: %s\t\t\t\t\t\tROLL-NO: %d \n ", name, rollno);
	printf("\nMOTHER NAME: %s\t\t\t\t\t\tENROLLMENT-NO: %d \n ", mother_name, enroll);
	printf("\nSEMESTER: %d\t\t\t\t\t\t\tCOLLEGE-CODE: %d \n ",  sem, clg_code);
	printf("\nCOLLEGE NAME: %s\t\t\t\t\tMEDIUM: %s \n ", clg_name, medium);
	printf("\nBRANCH: %s \n", branch);
	printf("\n=================================================================================================================================");
	printf("\n=================================================================================================================================\n");
	printf("| Sr. |          SUBJECT                    |              MARKS             |		OBTAINED MARKS           | REMARKS   |\n");
	printf("| NO. |              NAME                   | THEORY.MAX | PRAC.MAX | TOTAL  |THEORY.OBT | PRAC.OBT |  TOTAL  | (GRADE)  |\n");
	printf("------------------------------------------------------------------------------------------------------------------------|\n");
	printf("| 1. | Applied Mathematics-1                |    70      |    30    |  100   |   %d%c   |	%d%c   |	%d	 |    %c    |\n", m, s, mi, v, M, m_grade);
	printf("| 2. | Engineering Physics (Theory)         |    70      |          |        |   %d%c   |          |		 |          |\n", p, s1);
	printf("| 3. | Engineering Physics (Practical)      |            |    30    |  100   |          |   %d%c   |	%d	 |    %c    |\n", p_pra, v1, P, p_grade);
	printf("| 4. | Engineering Chemistry (Theory)       |    70      |          |        |   %d%c   |          |		 |          |\n", c, s2);
	printf("| 5. | Engineering Chemistry (Practical)    |            |    30    |  100   |          |   %d%c   |	%d	 |    %c    |\n", c_pra, v2, C, c_grade);
	printf("| 6. | Electrical Engineering (Theory)      |    70      |          |        |   %d%c   |          |		 |          |\n", ee, s3);
	printf("| 7. | Electrical Engineering (Practical)   |            |    30    |  100   |          |   %d%c   |	%d	 |    %c    |\n", ec_pra, v3, EE, ee_grade);
	printf("| 8. | Basic Civil Engineering              |    70      |    30    |  100   |   %d%c   |   %d%c   |	%d	 |    %c    |\n", civil, s4, civI, v4, CIV, civ_grade);
	while(f<130)
	{
		printf("-");
		f++;
	}
	
	printf("\n|               TOTAL                     |     350    |   150    |   500  |    %d    |    %d    |    %d   |        |\n", t1, t2, total);
	printf("\n|----------------------------------------------------------------------------------------------------------------------------------------\n");

	if(per>=85)
	{
  		grade='A';
  	}
 	else if(per>70 && per<85)
 	{
  		grade='B';
  	}
  	else if(per>60 && per<71)
  	{
 	 	grade='C';
 	}
  	else if(per>45 && per<61)
 	{
		grade='D';
	}
  	else
  	{
  		grade='E';
	}
	
	
	
	if(per>45 && m>25 && c>25 && p>25 && civil>25 && ee>25 && mi>12 && p_pra>12 && c_pra>12 && civI>12 && ec_pra>12)
	{
		printf("\n|            RESULT : PASS           |    GRADE :   %c                      |   PERCENTAGE:      %.2f               |", grade, per);
	}
	else
	{
		printf("\n|            RESULT : FAIL                                                                                         |");
	}
	
printf("\n|==========================================================================================================================================");

	
	
	
	
	
	
}
	








