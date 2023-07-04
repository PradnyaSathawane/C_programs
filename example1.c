#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CANDIDATE_COUNT

#define CANDIDATE1 "Thor"
#define CANDIDATE2 "Iron man"
#define CANDIDATE3 "Captain America"
#define CANDIDATE4 "Spider man"
void student_registration();
void studentLogin();
void voting();
void adminlogin();
void getLeadingCandidate();
void viewvotingdetails();
void login();
static int x;
int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;
struct president_vote
{
	
	char username[10], pass[10];
	char name[20], gender;
	int age, rollno, enrollmentno, mobileno;
}p1[3];
int main()
{
	
	
	int choice;
	system("cls");
	printf("***********college president voting system************\n\n\n");
	printf("\n1.student Registration.\n2. Student Login.\n3. Admin Login.\n4. Exit.");
	printf("\n\nEnter your choice: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			student_registration();
			break;
		case 2:
			login();
			break;
		case 3:
			adminlogin();
			break;
		case 4:
			exit(0);
			
	}
}
void student_registration()
	{
		
		fflush(stdin);
		char name[20];
		char username[10];
		char pass[10];
		printf("\nEnter your name: ");
		gets(name);
		strcpy(p1[x].name,name);
		printf("\nEnter your gender: ");
		scanf("%c", &p1[x].gender);
		scanf("%c", &p1[x].gender);
		printf("\nEnter age: ");
		scanf("%d",&p1[x].age);
		printf("\nEnter your roll-no.: ");
		scanf("%d", &p1[x].rollno);
		printf("\n Enter your enrollment-no.: ");
		scanf("%d", &p1[x].enrollmentno);
		printf("\n Enter your mobile-no.: ");
		scanf("%d", &p1[x].mobileno);
		printf("\ncreate your username: ");
		gets(username);
		strcpy(p1[x].username, username);
		gets(username);
		strcpy(p1[x].username, username);
		printf("\nEnter your password: ");
		gets(pass);
		strcpy(p1[x].pass,pass);
		
		printf("\n\n\t_______.You are successfully registered._______");
		
		if(x==2)
		{
			x=0;
		}
		else
		{
			x++;
		}
		main();
	}
	
	void login()
	{
		char username[10];
		char password[10];
		if(p1[x].age!=0)
		{
			fflush(stdin);
			printf("\nEnter your Username: ");
			gets(username);
			printf("\Enter your Password: ");
			gets(password);
			gets(password);
			int i=strcmp(p1[x].pass, password);
			int j=strcmp(p1[x].username,username);
			if(i==0 && j==0)
			{
				printf("\nYou are successfully logged in..\n\n");
				voting();
			}
			
			else
			{
				printf("\nyour entered password is invalid..");
				login();
			}
		}
		else
		{
			printf("No one has registered yet.. please register first...!!!\n\n");
			int i, j;
			
			for(i=0; i<=32767; i++)
			{
				for(j=0; j<=32767; j++)
				{
					
				}
			}
			if(x==2)
			{
				x=0;
			}
			else
			{
				x++;
			}
			main();
		}
		
	}
		
		void adminlogin()
		{
			int value;
			char id1[10]="marvel";
			char pass1[10]="123marvel";
			char inputID[10];
			char password1[10];
			printf("\nPlease enter your login id: ");
			gets(inputID);
			gets(inputID);
			printf("\nEnter your password: ");
			gets(password1);
			int a=strcmp(inputID, id1);
			int p=strcmp(password1,pass1);
			if(a==0 && p==0)
			{
				printf("\nYou are successfully logged in..\n\n");
			
			}
			
			else
			{
				printf("\nyour entered id or password is invalid..");
			}
			printf("\n 1.View voting details. \n4.Find Leading candidate..");
			printf("\n Enter your choice:");
			scanf("%d", &value);
			switch(value)
			{
				case1:
					viewvotingdetails();
					break;
				case2:
					getLeadingCandidate();
					break;
			}
			viewvotingdetails();
			getLeadingCandidate();
		}
		


void viewvotingdetails()
{
	
	printf("\n\n ##### Voting Statics ####");
	printf("\n %s - %d ", CANDIDATE1, votesCount1);
	printf("\n %s - %d ", CANDIDATE2, votesCount2);
	printf("\n %s - %d ", CANDIDATE3, votesCount3);
	printf("\n %s - %d ", CANDIDATE4, votesCount4);
	printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
	
}

void getLeadingCandidate()
{
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");    
    
    
}

	
void voting()
{
	int choice;    
	printf("\n\n ### Please choose your Candidate ####\n\n");
	printf("\n 1. %s", CANDIDATE1);
	printf("\n 2. %s", CANDIDATE2);
	printf("\n 3. %s", CANDIDATE3);
	printf("\n 4. %s", CANDIDATE4);
	printf("\n 5. %s", "None of These");
					
	printf("\n\n Input your choice (1 - 4) : ");
	scanf("%d",&choice);
					
	switch(choice)
	{
					    case 1: votesCount1++; break;
					    case 2: votesCount2++; break;
					    case 3: votesCount3++; break;
					    case 4: votesCount4++; break;
					    case 5: spoiledtvotes++; break;
					    default: printf("\n Error: Wrong Choice !! Please retry");
					             //hold the screen
					             getchar();
					}
					printf("\n thanks for vote !!");
					if(x==2)
					{
						x=0;
					}
					else
					{
						x++;
					}
					main();

				
			}

