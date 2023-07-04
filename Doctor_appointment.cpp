#include<iostream>
using namespace std;
class Appointment
{
	public:
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
		
};
int main()
{
	int choice, ch, ch1, count;
	system("cls");
	cout<<"\n                 ----------------------------------------------------------                      ";
	cout<<"\n                                                                                                 ";
	cout<<"\n                                         WELCOME                                                 ";
	cout<<"\n                                                                                                 ";
	cout<<"\n                 ----------------------------------------------------------                      ";
	cout<<"\n1. Patient.  \n\n2. Doctor.";
	cout<<"\n\nEnter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n1. Patient registration. \n\n2. Patient Login.";
			cout<<"\n\nEnter you choice: ";
			cin>>ch;
			switch(ch)
			{
				case 1:
					//Patient_reg();
					break;
					
				case 2:
					
					//Patient_login();
					break;
					
					
			}
			break;
			
		case 2:
			cout<<"\n1. Doctor registration. \n\n2. Doctor Login.";
			cout<<"\nEnter you choice: ";
			cin>>ch1;
			switch(ch1)
			{
				case 1:
					//Doctor_reg();
					break;
					
				case 2:
					//Doctor_login();
					break;
					
					
			}
			break;
			
	}
		
	return 0;
	
}
