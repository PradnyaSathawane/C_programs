#include<stdio.h>
#include<string.h>
void Patient_reg();
void Patient_login();
void login();
void Doctor_reg();
void Doctor_login();

union Patientreg
{
	char name[30], pass[10], gender;
	int age, mobile_no;
	
};

union doctor{
	char name[20], email[30], specialization[40], password[10], count;
	int mobile;
	
};
int main()
{
	int choice, ch, ch1, count;
	system("cls");
	printf("\n                 ----------------------------------------------------------                      ");
	printf("\n                                                                                                 ");
	printf("\n                                         WELCOME                                                 ");
	printf("\n                                                                                                 ");
	printf("\n                 ----------------------------------------------------------                      ");
	printf("\n1. Patient.  \n\n2. Doctor.");
	printf("\n\nEnter your choice: ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("\n1. Patient registration. \n\n2. Patient Login.");
			printf("\n\nEnter you choice: ");
			scanf("%d", &ch);
			switch(ch)
			{
				case 1:
					Patient_reg();
					break;
					
				case 2:
					
					Patient_login();
					break;
					
					
			}
			break;
			
		case 2:
			printf("\n1. Doctor registration. \n\n2. Doctor Login.");
			printf("\nEnter you choice: ");
			scanf("%d", &ch1);
			switch(ch1)
			{
				case 1:
					Doctor_reg();
					break;
					
				case 2:
					//Doctor_login();
					break;
					
					
			}
			break;
			
	}
		
	return 0;
}

void Patient_reg()
{
	
	int i, j, lw=0, up=0, sp=0, num=0, count;
	union Patientreg p[count];
	printf("\n                    *******WELCOME TO PATIENT REGISTRATION******                      \n");
	printf("\nEnter number of patient to be registered: ");
	scanf("%d", &count);
	for(i=0; i<count; i++)
	{
		
		printf("\nEnter your name: ");
		scanf("%s", &p[i].name);
		printf("\nEnter your age: ");
		scanf("%d", &p[i].age);
		printf("\nEnter your mobile no.: ");
		scanf("%d", &p[i].mobile_no);
		printf("\nEnter your gender [f/m]: ");
		scanf("%s", &p[i].gender);
		pas:
		printf("\nCreate your password: ");
		scanf("%s", &p[i].pass);
		for(j=0; j<10; j++)
		{
			if((int)p[i].pass[j]>=97 && (int)p[i].pass[j]<=122)
			{
				lw++;
			}
			else if((int)p[i].pass[j]>=65 && (int)p[i].pass[j]<=90)
			{
				up++;
			}
			else if((int)p[i].pass[j]>=48 && (int)p[i].pass[j]<=57)
			{
				num++;
			}
			else{
				sp++;
			}
		}
		if(up>0 && lw>0 && sp>0 && num>0)
		{
			printf("\n\n--------Your registration is completed.---------");
		}
		else
		{
			printf("\nInvalid Password.");
			goto pas;
		}
		
		if(count>1)
		{
			printf("\nNow enter details of another Patient registration.");
		}
	
	}
	
	main();
	
}


void Patient_login()
{
	int mob, count, i, flag=0;
	char pass1[10];
	union Patientreg p[count];
	printf("\n             _______________________________________");
	printf("\n             |                                      |");
	printf("\n             |           WELCOME TO LOGIN           |");
	printf("\n             |______________________________________|");
	printf("\nEnter your registered mobile number: ");
	scanf("%d", &mob);
	printf("\nEnter your Password: ");
	scanf("%s", &pass1);
	for(i=0;i<count;i++)
	{
		int k=strcmp(p[i].mobile_no, mob);
		int t=strcmp(p[i].pass, pass1);
		if(k==0 && t==0)
		{
			printf("\n_______You are logged in sucessfully______");
			//login();
		}
		else
		{
			printf("\n______Entered mobile no. or password is invalid_______\n\t\t\t____TRY AGAIN___");
			Patient_login();
		}		
	}
	
}

void login()
{
	
	
}

void Doctor_reg()
{
	int i, j, lw=0, up=0, sp=0, num=0, count;
	union doctor d[count];
	printf("\n                    *******WELCOME TO DOCTOR REGISTRATION******                      \n");
	printf("\nEnter number of doctor to be registered: ");
	scanf("%d", &count);
	for(i=0; i<count; i++)
	{
		printf("\nEnter Doctor name: ");
		scanf("%s", &d[i].name);
		printf("\nEnter mobile number: ");
		scanf("%d", &d[i].mobile);
		printf("\nEnter email: ");
		scanf("%s", &d[i].email);
		printf("\nEnter Specialization: ");
		scanf("%s", &d[i].specialization);
		pass:
		printf("\nEnter Password: ");
		scanf("%s", &d[i].password);
		for(j=0; j<10; j++)
		{
			if((int)d[i].password[j]>=97 && (int)d[i].password[j]<=122)
			{
				lw++;
			}
			else if((int)d[i].password[j]>=65 && (int)d[i].password[j]<=90)
			{
				up++;
			}
			else if((int)d[i].password[j]>=48 && (int)d[i].password[j]<=57)
			{
				num++;
			}
			else{
				sp++;
			}
		}
		if(up>0 && lw>0 && sp>0 && num>0)
		{
			printf("\n Your registration is completed.");
		}
		else
		{
			printf("\nInvalid Password.");
			goto pass;
		}
		
		if(count>1)
		{
			printf("\nNow enter details of another Doctor.");
		}
	}
	main();
}

void Doctor_login()
{
	
}





