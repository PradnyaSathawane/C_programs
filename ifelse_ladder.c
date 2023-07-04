//NESTED IF.//

//WAP for leap year.//
/*#include<stdio.h>
void main()
{
	int year;
	printf("enter any year: ");
	scanf("%d", &year);
	if(year%100!=0)
	{
		if(year%4==0)
		{
			printf("\nIt is a leap year.");
		}
		else
		{
			printf("\nIt is not a leap year.");
		}
	}
	else
	{
		if(year%4==0 && year%400==0)
		{
			printf("\nIt is a leap year.");
		}
		else
		{
			printf("\nIt is not leap year.");
		}
	}
	
	
}*/


//WAP tp find smallest number among the 3 numbers.//

/*#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter any number: ");
	scanf("%d%d%d", &a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("\n%d is smallest number.", a);
		}
		else
		{
			printf("\n%d is smallest number.", c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d is smallest number.", b);
		}
		else
		{
			printf("%d is smallest number.", c);
		}
	}
	
	
}*/


//WAP tp find largest number among the 3 numbers.//

/*#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter any number: ");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n%d is largest number.", a);
		}
		else
		{
			printf("\n%d is largest number.", c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is largest number.", b);
		}
		else
		{
			printf("%d is largest number.", c);
		}
	}
	
	
}*/


//ELSE IF LADDER.

/*#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c", &ch);
	if(ch>=65 && ch<=90)
	{
		printf("\nIt is upper case.");
		
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\nIt is lower case.");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\nIt is a digit.");
	}
	else
	{
		printf("\nIt is Special symbol.");
	}
}*/


//
/*#include<stdio.h>
void main()
{
	float m1,m2,m3,total,per;
	char grade;
	printf("Enter marks of sub: ");
	scanf("%f%f%f", &m1, &m2, &m3);
	total=m1+m2+m3;
	per=total/4.0;
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
		printf("\nGrade = 'F'");
	}
}*/


//SWITCH CASES.//

//Accept two integers and perform arithmetic operators.//

#include<stdio.h>
void main()
{
	int a, b, result, choice;
	printf("1) Addition \n2) Subtraction \n3) Multiplication \n4) Division \n5) Mod");
	printf("enter choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter two values: ");
			scanf("%d%d", &a,&b);
			result=a+b;
			printf("\nAddition is: %d" ,result);
			break;
		case 2:
			printf("\nEnter two values: ");
			scanf("%d%d", &a,&b);
			result=a-b;
			printf("\nSubtraction is: %d" ,result);
			break;
		case 3:
			printf("\nEnter two values: ");
			scanf("%d%d", &a,&b);
			result=a*b;
			printf("\nMultiplication is: %d" ,result);
			break;
		case 4:
			printf("\nEnter two values: ");
			scanf("%d%d", &a,&b);
			result=a/b;
			printf("\nDivision is: %d" ,result);
			break;
		default: 
			printf("\nWrong choice.");
	}
		
}


//Accept a character and check character is vowel or not.//

/*#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c", &ch);
	switch(ch)
	{
		case'a':
			printf("\nIt is an vowel.");
			break;
		case'e':
			printf("\nIt is an vowel.");
			break;
		case'i':
			printf("\nIt is an vowel.");
			break;
		case'o':
			printf("\nIt is an vowel.");
			break;
		case'u':
			printf("\nIt is an vowel.");
			break;
		case'A':
			printf("\nIt is an vowel.");
			break;
		case'E':
			printf("\nIt is an vowel.");
			break;
		case'I':
			printf("\nIt is an vowel.");
			break;
		case'O':
			printf("\nIt is an vowel.");
			break;
		case'U':
			printf("\nIt is an vowel.");
			break;	
		default:
			printf("\nIt is any other character.");
	}
}*/


/*#include<stdio.h>
int main()
{
	int i=0;
	while(i<=4)
	{
		printf("Hello World\n");
		i++;
	}
}*/


/*#include<stdio.h>
void main()
{
	int i=0;
	do
	{
		printf("hello World\n");
		i++;
	}
	while(i<=4);
}*/

/*#include<stdio.h>
void main()
{
	int i;
	for(i=0; i<5; i++)
	{
		printf("hello world\n");
	}
}*/


/*#include<stdio.h>
void main()
{
	int i=0;
	while(i<=10)
	{
		printf("%d\n", i);
		i++;
	}
}*/


/*#include<stdio.h>
void main()
{
	int i=0, n=5;
	
	while(i<=10)
	{
		int table=i*n;
		printf("%d\n", table);
		i++;
	}
}*/

/*#include<stdio.h>
void main()
{
	int n,i=1,fact=1;
	printf("enter any number: ");
	scanf("%d");
	while(i<=n)
	{
		fact = fact*1;
		i++;
		printf("factorial is: \n");
	}
	
}*/


