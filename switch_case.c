#include<stdio.h>
void main()
{
	int a, b, result, choice, ch, ch1, ch2, ch3, c, d;
	printf("1) Addition \n2) Subtraction \n3) Multiplication \n4) Division \n5) Mod");
	printf("enter choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n1. 2_digit addition.\n2. 3_digit addition.\n3. 4_digit addition. ");
			printf("\nEnter your choice.");
			scanf("%d", &ch);
			switch(ch)
			{
				case 1:
					printf("\nEnter two values for 2 digit addition.");
					scanf("%d%d", &a, &b);
					result=a+b;
					printf("\n%d", result);
					break;
					
				case 2:
					printf("\nEnter three values for 3 digit addition.");
					scanf("%d%d%d", &a, &b, &c);
					result=a+b+c;
					printf("\n%d", result);
					break;
					
				case 3:
					printf("\nEnter four values for 4 digit addition.");
					scanf("%d%d%d%d", &a, &b, &c, &d);
					result=a+b+c+d;
					printf("\n%d", result);
					break;
					
				default:
					printf("\n Wrong choice.");
			}
			break;
		case 2:
			printf("\n1. 2_digit subtraction.\n2. 3_digit subtraction.\n3. 4_digit subtraction. ");
			printf("\nEnter your choice.");
			scanf("%d", &ch1);
			switch(ch1)
			{
				case 1:
					printf("\nEnter two values for 2 digit subtraction.");
					scanf("%d%d", &a, &b);
					result=a-b;
					printf("\n%d", result);
					break;
					
				case 2:
					printf("\nEnter three values for 3 digit subtraction.");
					scanf("%d%d%d", &a, &b, &c);
					result=a-b-c;
					printf("\n%d", result);
					break;
					
				case 3:
					printf("\nEnter four values for 4 digit addition.");
					scanf("%d%d%d%d", &a, &b, &c, &d);
					result=a-b-c-d;
					printf("\n%d", result);
					break;
					
				default:
					printf("\n Wrong choice.");
			}
			break;
		case 3:
			printf("\n1. 2_digit multiplication.\n2. 3_digit multiplication.\n3. 4_digit multiplication. ");
			printf("\nEnter your choice.");
			scanf("%d", &ch2);
			switch(ch2)
			{
				case 1:
					printf("\nEnter two values for 2 digit multiplication.");
					scanf("%d%d", &a, &b);
					result=a*b;
					printf("\n%d", result);
					break;
					
				case 2:
					printf("\nEnter three values for 3 digit multiplication.");
					scanf("%d%d%d", &a, &b, &c);
					result=a*b*c;
					printf("\n%d", result);
					break;
					
				case 3:
					printf("\nEnter four values for 4 digit multiplication.");
					scanf("%d%d%d%d", &a, &b, &c, &d);
					result=a*b*c*d;
					printf("\n%d", result);
					break;
					
				default:
					printf("\n Wrong choice.");
			}
			break;
		case 4:
			printf("\n1. 2_digit division.\n2. 3_digit division.\n3. 4_digit division. ");
			printf("\nEnter your choice.");
			scanf("%d", &ch3);
			switch(ch3)
			{
				case 1:
					printf("\nEnter two values for 2 digit division.");
					scanf("%d%d", &a, &b);
					result=a/b;
					printf("\n%d", result);
					break;
					
				case 2:
					printf("\nEnter three values for 3 digit division.");
					scanf("%d%d%d", &a, &b, &c);
					result=a/b/c;
					printf("\n%d", result);
					break;
					
				case 3:
					printf("\nEnter four values for 4 digit division.");
					scanf("%d%d%d%d", &a, &b, &c, &d);
					result=a/b/c/d;
					printf("\n%d", result);
					break;
					
				default:
					printf("\n Wrong choice.");
			} 
			break;
		default: 
			printf("\nWrong choice.");
	}
}
