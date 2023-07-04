/*#include<stdio.h>
int cube(int);
int main()
{
	int b, cub;
	printf("Enter a values: ");
	scanf("%d", &b);
	cub=cube(b);
	printf("Cube of %d is %d", b, cub);
	return 0;
}
int cube(int x)
{
	return x*x*x;
}*/


/*#include<stdio.h>
void add(int, int);
void main()
{
	int a, b,sum;
	printf("ENter values of a and b: ");
	scanf("%d %d", &a, &b);
	sum=(a,b);
	printf("Sum of a and b is: %d",  sum);
}
void add(inta, intb)
{
	int a,b, result;
	result=a+b;
}*/
	
/*#include<stdio.h>
int add(int,int);
int main()
{
	int a, b, sum=0;
	printf("ENter values of a and b: ");
	scanf("%d%d", &a, &b);
	sum=add(a,b);
	printf("Sum of a and b is: %d",  sum);
	return 0;
}
int add(int a, int b)         //call by value.
{
	int result;
	result=a+b;
	return result;
}*/



/*#include<stdio.h>
#include<math.h>
void swap(int*, int*);
void main()
{
	int a, b;
	printf("enter value for a & b: ");
	scanf("%d%d", &a, &b);
	printf("\nvalue before swapping are:%d %d", a, b);
	swap(&a, &b);
}
void swap(int *a, int *b)     					  //call by reference.
{
	int *temp;
	*a=temp;
	*b=*a;
	*b=temp;
	printf("\nvalues after swapping are: %d %d", *a, *b);
}*/





// Program to check number is even or odd using function.


/*#include<stdio.h>
#include<math.h>
void even(int);
void main()
{
	int a;
	printf("enter value of a: \n");
	scanf("%d5", &a);
	even(a);
}
void even(int a)                        		 //call by value.
{
	if(a%2==0)
	{
		printf("\n %d is even number.",a);
	}
	else
	{
		printf("\n %d is odd number.",a);
	}
	
}
*/

//

/*#include<stdio.h>
#include<math.h>
void even(int*);
void main()
{
	int a;
	printf("enter value of a: \n");
	scanf("%d", &a);
	even(&a);
}
void even(int* a)     						 	 //call by reference.
{
	if(*a%2==0)
	{
		printf("\n %d is even number.",*a);
	}
	else
	{
		printf("\n %d is odd number.",*a);
	}
	
}*/





// Program to find factorial using function.


/*#include<stdio.h>
#include<math.h>
void factorial(int);
void main()
{
	int a;
	printf("enter value of a: \n");
	scanf("%d5", &a);
	factorial(a);
}
void factorial(int a)      					//call by value.
{
	int i=1, fact=1;
	while(i<=a)
	{
		fact = fact*i;
		i++;
	}
	printf("factorial of %d is %d", a, fact);
	
}*/

//

/*#include<stdio.h>
#include<math.h>
void factorial(int*);
void main()
{
	int a;
	printf("enter value of *a: \n");
	scanf("%d", &a);
	factorial(&a);
}
void factorial(int* a)        					 //call by reference.
{
	int i=1, *fact=1;
	while(i<=a)
	{
		*fact = *fact*i;
		i++;
	}
	printf("factorial of %d is %d", *a, *fact);
}*/


	
	
// Program to find largest number from 2 numbers using function.


/*#include<stdio.h>
#include<math.h>
void largest(int, int);
void main()
{
	int a, b;
	printf("enter value for a & b: \n");
	scanf("%d %d", &a, &b);
	largest(a, b);
}
void largest(int a, int b)        					 //call by value.
{
	if(a>b)
	{
		printf("\na=%d is largest. ", a);
	}
	else{
		printf("\nb=%d is largest.", b);
	}
	
}*/


/*#include<stdio.h>
#include<math.h>
void largest(int*, int*);
void main()
{
	int a, b;
	printf("enter value for a & b: \n");
	scanf("%d %d", &a, &b);
	largest(&a, &b);
}
void largest(int * a, int * b)        				 //call by reference.
{
	if(*a>*b)
	{
		printf("\na=%d is largest. ", *a);
	}
	else{
		printf("\nb=%d is largest.", *b);
	}
	
}*/
