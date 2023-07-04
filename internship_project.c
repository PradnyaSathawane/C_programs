#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CANDIDATE_COUNT

#define CANDIDATE1 "THOR"
#define CANDIDATE2 "IRON MAN"
#define CANDIDATE3 "CAPTAIN AMERICA"
#define CANDIDATE4 "SPIDER MAN"
void student_registration();
void studentLogin();
void voting();
void adminlogin();
void getLeadingCandidate();
void viewvotingdetails();
void login();
//void addData();
int x;
int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;
struct president_vote
{
	
	char username[20], pass[20];
	char name[20], gender;
	int age, rollno, enrollmentno, mobileno;
}p1[3];
int main()
{
	
	
	int choice;
	system("cls");
	printf("\t\t----------------------------------------------------------------------\n");
	printf("\t\t--                                                                  --\n");
	printf("\t\t--                                                                  --\n");
	printf("\n\t\t\t***********COLLEGE PRESIDENT VOTING SYSTEM************\t\t\n\n");
	printf("\t\t--                                                                  --\n");
	printf("\t\t--                                                                  --\n");
	printf("\t\t----------------------------------------------------------------------\n");
	printf("\n\n\n1.Student Registration.\n\n2. Student Login.\n\n3. Admin Login.\n\n4. Exit.");
	printf("\n\nENTER YOUR CHOICE: ");
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
		printf("\n\n\t\t######### STUDENT REGISTRATION FORM #########\n");
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
		int i=0,flag=0;
		char username[10];
		char password[10];
		if(x!=0)
		{
			//addData();
			printf("\n\n\t\t######### LOGIN TO YOUR ACCOUNT #########\n");
			fflush(stdin);
			printf("\nEnter your Username: ");
			gets(username);
			printf("\Enter your Password: ");
			gets(password);
			gets(password);
		
			for(i=0;i<3;i++)
			{
					int i=strcmp(p1[i].pass, password);
					int j=strcmp(p1[i].username,username);
					if(i==0 && j==0)
					{
						flag=1;
					}
				
			}
			if(flag)
			{
				voting();
				
			}	
			else
			{
				printf("\n\n\t\t_______YOUR ENTERED ID OR PASSWORD IS INVALID_______\n");
				printf("\n\t\t_____PLEASE TRY AGAIN..!!_____\n");
				login();
			}
			
		}
		else
		{
			printf("\n\n\t_____NO ONE HAS REGISTERED YET.. PLEASE REGISTER FIRST...!!_____\n\n");
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
			system("cls");
			char id1[10]="marvel";
			char pass1[10]="123marvel";
			char inputID[10];
			char password1[10];
			printf("\n\t\t######### LOGIN FOR ADMIN ACCOUNT #########\n");
			printf("                ________________________           \n\n");
			printf("\nPlease enter your login id: ");
			gets(inputID);
			gets(inputID);
			printf("\nEnter your password: ");
			gets(password1);
			int a=strcmp(inputID, id1);
			int p=strcmp(password1,pass1);
			if(a==0 && p==0)
			{
				printf("\n\t\t________YOU ARE SUCCESSFULLY LOGGED IN_______\n\n");
			}
			
			else
			{
				printf("\n\n\t\t_______YOUR ENTERED ID OR PASSWORD IS INVALID_______\n");
				printf("\n\t\t_____PLEASE TRY AGAIN..!!_____\n");
				int y, z;
				for(y=0; y<=32767; y++)
				{
					for(z=0; z<=32767; z++)
					{
					
					}
				}
				adminlogin();
			}
			printf("\n\n1.View voting details. \n\n2.Find Leading candidate..");
			printf("\n\nEnter your choice:");
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
			int r, t;
			
			for(r=0; r<=32767; r++)
			{
				for(t=0; t<=32767; t++)
				{
					
				}
			}
			main();
		}
		


void viewvotingdetails()
{
	system("cls");
	printf("\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
	printf("\n\n\t\t\t_____***** VOTING RESULT *****_____\n\n");
	printf("\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
	printf("\n %s - %d ", CANDIDATE1, votesCount1);
	printf("\n %s - %d ", CANDIDATE2, votesCount2);
	printf("\n %s - %d ", CANDIDATE3, votesCount3);
	printf("\n %s - %d ", CANDIDATE4, votesCount4);
	printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
	
}

void getLeadingCandidate()
{
	printf("\n\n\t\t''''''''''''''''''''''''''''''''''''''''''''''''''\n");
    printf("\n\t\t\t-----  LEADING CANDIDATE  -----\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    {
    printf("\t\t\t<<  %s  >>",CANDIDATE1);
	}
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    {
    printf("\t\t\t<<  %s  >>",CANDIDATE2);
	}
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    {
    printf("\t\t\t<<  %s  >>",CANDIDATE3);
	}
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    {
    printf("\t\t\t<<  %s  >>",CANDIDATE4);
	}
    else
    {
    printf("\t\t----- Warning !!! No-win situation----");    
	}
    printf("\n\t\t''''''''''''''''''''''''''''''''''''''''''''''''''\n\n");
}

	
	void voting()
				{
				
					
					
					int choice;   
					system("cls");
					printf("\n\n\t\t~~~~~~~~~~~ WELCOME TO VOTING SECTION ~~~~~~~~~~~\n\n");
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










/*void addData()
{
	p1[0].age=20;
	p1[1].age=23;
	p1[2].age=21;
	p1[3].age=19;
	p1[4].age=24;
	
	p1[0].gender='m';
	p1[1].gender='f';
	p1[2].gender='f';
	p1[3].gender='m';
	p1[4].gender='m';
	
	p1[0].name="Hardin";
	p1[1].name="Tessa";
	p1[2].name="Hazel";
	p1[3].name="Jhon";
	p1[4].name="Noah";
	
	p1[0].rollno=121;
	p1[1].rollno=122;
	p1[2].rollno=123;
	p1[3].rollno=124;
	p1[4].rollno=125;
	
	p1[0].enrollmentno=10221;
	p1[1].enrollmentno=10222;
	p1[2].enrollmentno=10223;
	p1[3].enrollmentno=10224;
	p1[4].enrollmentno=10225;
	
	
	p1[0].mobileno=1111111111;
	p1[1].mobileno=2222222222;
	p1[2].mobileno=3333333333;
	p1[3].mobileno=4444444444;
	p1[4].mobileno=5555555555;
	
	
	p1[0].username="hardin123";
	p1[1].username="tessa123";
	p1[2].username="hazel123";
	p1[3].username="jhon123";
	p1[4].username="noah123";
	
	p1[0].pass="123hardin";
	p1[1].pass="123tessa";
	p1[2].pass="123hazel";
	p1[3].pass="123jhon";
	p1[4].pass="123noah";
	


}*/


