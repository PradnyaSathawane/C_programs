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
	int i=0;
	while(i<=10)
	{
		printf("%d", i);
		i++;
	}
}*/


//Accept a number and find factorial of any number.

/*#include<stdio.h>
void main()
{
	int n,i=1,fact=1;
	printf("enter any number: ");
	scanf("%d", &n);
	while(i<=n)
	{
		fact = fact*i;
		i++;
	}
	printf("factorial of %d is %d", n, fact);
	
}

//Accept a number and count number entered by user.

/*#include<stdio.h>
void main()
{
	int num, count=0;
	printf("enter any number: ");
	scanf("%d", &num);
	while(num>0)
	{
		num=num/10;
		count++;
	}
	printf("Total digits are: %d", count);
	
}*/
	
	
//Accept a number and print sum of digits of any number.

/*#include<stdio.h>
void main()
{
	int num, sum=0, rem;
	printf("enter any number: ");
	scanf("%d", &num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum is: %d", sum);
}*/



//Accept a number and find multiplication of any number.

/*#include<stdio.h>
void main()
{
	int n, fact=1;
	printf("enter number:");
	scanf("%d", &n);
	while(n<0)
	{
		fact=fact*n;
		n--;
	}
	printf("Factorial: %d", fact);	
}*/


//Accept a number check whether the number is palindrome or not.

#include<stdio.h>
void main()
{
	int num, rem, rev=0;
	printf("enter any number: ");
	scanf("%d", &num);
	int data=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
//	printf("\n%d",num);
	if(data==rev)
	{
		printf("\nThe number is palindrome.");
	}
	else
	{
		printf("\nThe number is not palindrome.");
	}
}


//Print sum of even numbers from 1 to 20.

/*#include<stdio.h>
void main)
{
	int i, sum=0;
	for(i=1; i<=20; i++)
	{
		if(i%2==0)
		{
			sum=sum+i;	
		}
	}
		printf("Sum of even numbers from 1 to 20 is: %d", sum);
}*/


/*#include<stdio.h>
void main()
{
	int i;
	for(i=20;i>=0;i=i-2)
	{
		printf("%d\n", i);
	}
}*/


/*#include<stdio.h>
void main()
{
	int num, rem, rev=0;
	printf("enter any number: ");
	scanf("%d", &num);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		num=rev-2;
	}
	printf("%d\n", rev);
}*/

//nested loops.

/*#include<stdio.h>
void main()
{
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}*/


/*#include<stdio.h>
void main()
{
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%d", i+1);
		}
		printf("\n");
	}
	
}*/



/*#include<stdio.h>
void main()
{
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("*", j+1);
		}
		printf("\n");
	}
	
}*/

/*#include<stdio.h>
void main)
{
	int i, j;
	for(i=1; i<=5; i++)
	{
		for(j=5; j>i; j--)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
